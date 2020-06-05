#pragma once
#include <vector>
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "ball.hpp"

class Game
{
    public:
        sf::Time m_TimePerFrame;
        Ball *m_ball1 = NULL;
        Ball *m_ball2 = NULL;
        std::vector<Ball*> m_Entities;
        sf::RenderWindow _renderWindow;
        std::vector<sf::VideoMode> m_Videomodes;
        bool m_captureMouse;

        sf::CircleShape * shape;

    public:
        Game();
        ~Game();
        void run();

    private:
        void gameLoop();
        void processInput();
        void update(sf::Time TimePerFrame);
        void handleEvent(sf::Event event);
        void renderFrame();
};
