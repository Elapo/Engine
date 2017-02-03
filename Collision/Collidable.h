//
// Created by Frederik on 06/01/2017.
//

#ifndef ENGINE_COLLIDABLE_H
#define ENGINE_COLLIDABLE_H

namespace Collision {
    struct BoundingBox {

    };

    class Collidable {
    public:
        BoundingBox getBpundingBox();
    private:
        BoundingBox m_BoundingBox;
    };


}


#endif //ENGINE_COLLIDABLE_H
