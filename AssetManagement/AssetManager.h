//
// Created by Frederik on 09/01/2017.
//

#ifndef ENGINE_ASSETMANAGER_H
#define ENGINE_ASSETMANAGER_H

#include <map>
#include "Asset.h"

namespace AssetManagement {
    class AssetManager {
    public:
        Asset * getAsset(std::string name);
    private:
        std::map<std::string, Asset> m_ManagedAssets;
        std::string createHash(Asset);
    };
}


#endif //ENGINE_ASSETMANAGER_H
