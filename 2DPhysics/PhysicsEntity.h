//
// Created by Frederik on 06/01/2017.
//

#ifndef ENGINE_PHYSICSENTITY_H
#define ENGINE_PHYSICSENTITY_H

namespace Physics{
    class PhysicsEntity {
    public:
        void update();
        void setForce();

    private:
        float m_XForce, m_YForce;
    };
}


#endif //ENGINE_PHYSICSENTITY_H
