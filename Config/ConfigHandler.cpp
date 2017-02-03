//
// Created by Frederik on 09/01/2017.
//

#include <fstream>
#include "ConfigHandler.h"

Config::ConfigHandler::ConfigHandler() {

}

Config::ConfigHandler::~ConfigHandler() {

}

void Config::ConfigHandler::CreateDefaultConfig() {
    if(m_CurrentConfig != nullptr)
        this->SaveFile();
    m_CurrentConfig->name = "engine.conf";
    m_CurrentConfig->entries = new std::vector<ConfigEntry*>();
}


/**
 * name=value
 *
 */
bool Config::ConfigHandler::LoadConfig(std::string path) {
    std::ifstream configFile;
    std::string line;
    configFile.open(path);
    if(!configFile.is_open()){
        return false;
    }
    while(getline(configFile, line)){
        std::string name, val;
        if(splitLine(line, name, val, "=")) {
            ConfigEntry entry;
            entry.name = name;
            entry.value = val;
            this->m_CurrentConfig->entries->push_back(&entry);
        }
        else return false;
    }
    return true;
}


void Config::ConfigHandler::SaveFile() {
    //todo save
    for(uint32_t i = 0; i < m_CurrentConfig->entries->size(); i++){
        delete m_CurrentConfig->entries->at(i);
    }
    this->m_CurrentConfig = {0};
}

void Config::ConfigHandler::AddEntry(Config::ConfigEntry entry) {
    this->m_CurrentConfig->entries->push_back(& entry);
}

void Config::ConfigHandler::AddEntry(std::string name, std::string value) {
    ConfigEntry entry;
    entry.value = value;
    entry.name = name;
    this->m_CurrentConfig->entries->push_back(& entry);
}

Config::ConfigFile *Config::ConfigHandler::getLoadedConfig() {
    return m_CurrentConfig;
}

bool Config::ConfigHandler::splitLine(std::string line,std::string& name, std::string& val, std::string ch) {
    int index = line.find("=");
    std::string tmpStr;
    if(index == -1) return false; //invalid line
    name =line.substr(0, (uint32_t) index); //this might not even work
    val = line.substr((uint32_t)index+1);
    return true;
}
