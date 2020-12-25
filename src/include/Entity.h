#ifndef ENTITY_H
#define ENTITY_H

#include "SFML/Graphics.hpp"

class Entity
{
    private:

    protected:



    public:
        Entity();
        virtual ~Entity();

        void update(const float& dt);
        void draw(sf::RenderTarget& _rw);

};

#endif
