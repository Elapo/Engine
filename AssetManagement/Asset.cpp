//
// Created by Frederik on 09/01/2017.
//

#include "Asset.h"

namespace AssetManagement{
    AssetType Asset::getType() {
        return SPRITE;
    }

    Asset::Asset(AssetType type) {
        this->m_AssetType = type;
    }

}
