//
// Created by Frederik on 06/01/2017.
//

#ifndef ENGINE_ENTITY_H
#define ENGINE_ENTITY_H

#include "../Collision/Collidable.h"
#include "../2DPhysics/PhysicsEntity.h"

namespace Core{
    class Entity : public Collision::Collidable, Physics::PhysicsEntity {

    };
}



#endif //ENGINE_ENTITY_H
