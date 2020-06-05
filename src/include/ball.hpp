#ifndef BALL_HPP
#define BALL_HPP

#include "SFML/Graphics.hpp"

class Ball :
	public sf::Drawable
{
    public:
        sf::CircleShape shape;

    public:
        Ball();
        ~Ball();

        sf::Vector2f m_position;
        sf::Vector2f m_direction;

        sf::Vector2f m_Momentum;
        int m_Mass;

    public:
        void draw(sf::RenderTarget& _rw, sf::RenderStates states) const;

};

#endif