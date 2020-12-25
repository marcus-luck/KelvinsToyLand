#include "ball.hpp"
#include <iostream>

Ball::Ball()
{
    this->m_selected = false;
    this->m_position = sf::Vector2f(100, 100);
    this->movementSpeed = sf::Vector2f(10.0, 10.0);
    this->shape = std::make_unique<sf::CircleShape>(sf::CircleShape(100.f));
	this->shape->setFillColor(sf::Color::Red);
    this->shape->setPosition(m_position.x, m_position.y);
}

Ball::~Ball()
{
    // delete shape;
}

void Ball::update(const float& dt)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        this->move(dt, -1.f, 0.f);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        this->move(dt, 1.f, 0.f);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        this->move(dt, 0.f, -1.f);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        this->move(dt, 0.f, 1.f);

}

void Ball::draw(sf::RenderTarget& _rw, sf::RenderStates states = sf::RenderStates::Default) const
{
    // std::cout << "drawing: " << shape.getLocalBounds << std::endl;
    _rw.draw(*this->shape.get());
    // _rw.draw(outline)
}


void Ball::setdir(float dirX, float dirY)
{

}

void Ball::move(const float& dt, float dirX, float dirY)
{
    shape->move(dirX * this->movementSpeed.x * dt, dirY * this-> movementSpeed.y * dt);
}