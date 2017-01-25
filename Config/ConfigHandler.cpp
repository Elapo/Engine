//
// Created by Frederik on 09/01/2017.
//

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


bool Config::ConfigHandler::LoadConfig(std::string path) {
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

}

