#include "ball.hpp"
#include <iostream>

Ball::Ball()
{
    m_position = sf::Vector2f(100, 100);
    shape = sf::CircleShape(100.f);
	shape.setFillColor(sf::Color::Red);
    shape.setPosition(m_position.x, m_position.y);
}

Ball::~Ball()
{
    // delete shape;
}

void Ball::draw(sf::RenderTarget& _rw, sf::RenderStates states) const
{
    // std::cout << "drawing: " << shape.getLocalBounds << std::endl;
    _rw.draw(shape);
    // _rw.draw(outline)
}

