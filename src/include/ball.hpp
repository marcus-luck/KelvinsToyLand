#ifndef BALL_HPP
#define BALL_HPP

#include <memory>
#include "Entity.h"

class Ball :
    public Entity,
	public sf::Drawable
{
    public:
        std::unique_ptr<sf::CircleShape> shape;

    private:
        bool m_selected;
        sf::Vector2f movementSpeed;

    public:
        Ball();
        ~Ball();

        sf::Vector2f m_position;
        sf::Vector2f m_direction;

        sf::Vector2f m_Momentum;
        int m_Mass;

    public:
        void update(const float& dt);
        // void render(sf::RenderTarget& _rw);
        void draw(sf::RenderTarget& _rw, sf::RenderStates states) const;
        void setdir(float dirX, float dirY);
        void move(const float& dt, float dirX, float dirY);
};

#endif