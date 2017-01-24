//
// Created by Frederik on 09/01/2017.
//

#ifndef ENGINE_ASSET_H
#define ENGINE_ASSET_H


namespace AssetManagement {

    enum AssetType{
        SPRITE,
        AUDIO,
        SCRIPT
    };


    class Asset {
    public:
        Asset(AssetType type);
        AssetType getType();
    private:
        AssetType m_AssetType;
    };
}


#endif //ENGINE_ASSET_H
