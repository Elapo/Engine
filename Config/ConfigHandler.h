//
// Created by Frederik on 09/01/2017.
//

#ifndef ENGINE_CONFIGHANDLER_H
#define ENGINE_CONFIGHANDLER_H

#include "Config.h"

namespace Config {
    class ConfigHandler {
    public:
        ConfigHandler();
        ~ConfigHandler();
        void CreateDefaultConfig();
        bool LoadConfig(std::string path);
        void SaveFile();
        void AddEntry(ConfigEntry entry);
        void AddEntry(std::string name, std::string value);
        ConfigFile * getLoadedConfig();

    private:
        ConfigFile * m_CurrentConfig;

    };
}


#endif //ENGINE_CONFIGHANDLER_H
