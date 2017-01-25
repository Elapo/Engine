//
// Created by FVHBB94 on 25/01/2017.
//

#ifndef ENGINE_CONFIG_H
#define ENGINE_CONFIG_H

#include <string>
#include <vector>

namespace Config{

    struct ConfigEntry{
        std::string name;
        std::string value;
        int size(){
            return sizeof(this);
        }
    };

    struct ConfigFile{
        std::string name;
        std::vector<ConfigEntry*>* entries;
    };


}

#endif //ENGINE_CONFIG_H
