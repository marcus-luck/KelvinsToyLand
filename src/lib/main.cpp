// #include <SFML/Graphics.hpp>
#include <iostream>
// #include <vector>

#include "game.hpp"


int main()
{

	try
	{
		Game g;
		g.run();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


	// std::vector<sf::VideoMode> videomodes = sf::VideoMode::getFullscreenModes();
	// sf::RenderWindow window(sf::VideoMode(1200, 800), "SFML works!");
	// sf::CircleShape shape(100.f);
	// shape.setFillColor(sf::Color::Green);

	// sf::CircleShape shape2(100.f);
	// shape2.setFillColor(sf::Color::Red);

	// sf::Vector2u winSize = window.getSize();

	// sf::Font font;
	// if (!font.loadFromFile("Roboto-Bold.ttf"))
	// {
	// 	// error...
	// }
	// int textSize = 400;
	// sf::Text text("", font, textSize);
	// text.setFillColor(sf::Color::White);

	// text.setPosition((winSize.x/2)-(textSize/2), (winSize.y/2)-(textSize/2));
	// sf::FloatRect textPos = text.getGlobalBounds();
	// sf::String sb = "";

	// Game loop
	// while (window.isOpen())
	// {
	// 	sf::Event event;

	// 	// Go through all events and handle them.
	// 	while (window.pollEvent(event))
	// 	{
	// 		sf::Vector2f b;
	// 		int shapeRadius = shape.getRadius();
	// 		sf::Vector2i mousePos;
	// 		bool captureMouse = true;

			
	// 	}

	// delete game;

	// return 0;
};
