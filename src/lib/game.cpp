#include <iostream>
// #include "logger.hpp"
// #include "ball.hpp"
#include "game.hpp"

struct MouseEvent
{

}

Game::Game() :
_renderWindow(sf::VideoMode(1024, 768, 32), "Kelvins Toysland")
{
	std::vector<sf::VideoMode> m_Videomodes = sf::VideoMode::getFullscreenModes();
	m_TimePerFrame = sf::seconds(1.f / 60.f);
	m_ball1 = new Ball();
	m_ball2 = new Ball();
	m_ball2->move(1, 200.0, 200.0);
	// std::vector<Ball> m_Entities;
	// Ball ball1;
	m_Entities.push_back(m_ball1);
	// bool m_captureMouse = false;
    shape = new sf::CircleShape(100.f);
	shape->setFillColor(sf::Color::Green);
}

Game::~Game()
{
	delete m_ball1;
	// delete m_Entities;
	// Cleanup
}

void Game::run()
{
	gameLoop();
}

void Game::gameLoop()
{
	std::cout << "Starting Game Loop" << std::endl;
	//Engine clock, keep track of time between frames etx, make sure engine runs at set speed.
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;

	while (_renderWindow.isOpen())
	{

		processInput();
		timeSinceLastUpdate += clock.restart();

		while (timeSinceLastUpdate > m_TimePerFrame)
		{

			timeSinceLastUpdate -= m_TimePerFrame;

			processInput();
			update(m_TimePerFrame);

		}

		renderFrame();
	}

}

void Game::processInput()
{
	sf::Event evt;

	while(_renderWindow.pollEvent(evt))
	{
		// if (event.type == sf::Event::GainedFocus)
		// 	mIsPaused = false;
		// else if (event.type == sf::Event::LostFocus)
		// 	mIsPaused = true;
		handleEvent(evt);
	}
}

void Game::update(sf::Time TimePerFrame)
{

}

void Game::handleEvent(sf::Event event)
{
	// bool m_captureMouse = True;
    // Do update the position 
    switch (event.type)
	{
		// window closed
		case sf::Event::Closed:
		{
			_renderWindow.close();
			break;
		}
			// key pressed
		case sf::Event::TextEntered:
		{
			// sb = sb + (char)event.text.unicode;
			// text.setString(sb);
			// textPos = text.getGlobalBounds();
			// text.setPosition((_renderWindow.getSize().x / 2) - (textPos.width / 2), textPos.height/2);
			// Do stuff
			break;
		}
		case sf::Event::KeyPressed:
		{
			if (event.key.control and event.key.code == 85) //85 == F1 
			{ 
				_renderWindow.create(m_Videomodes[0], "SFML works!", sf::Style::Fullscreen);
				m_captureMouse = true;
			}
			else if (event.key.control and event.key.code == 86)
			{
				_renderWindow.create(sf::VideoMode(1200, 800), "SFML works!", sf::Style::Default);
				m_captureMouse = false;
			}

			_renderWindow.setMouseCursorVisible(!m_captureMouse);
			_renderWindow.setMouseCursorGrabbed(m_captureMouse);
			// auto winSize = _renderWindow.getSize();
			// text.setPosition((winSize.x / 2) - (textSize / 4), (textSize / 4));
			break;
		}
		case sf::Event::Resized:
		{
			std::cout << "OMG Window resized!" << std::endl;
			//Resize windows
			// auto winSize = _renderWindow.getSize();
			// text.setPosition((winSize.x / 2) - (textSize / 4), (textSize / 4));
			break;
		}
		case sf::Event::MouseButtonPressed:
		{
			auto mouse_position_x = event.mouseButton.x;
            auto mouse_position_y = event.mouseButton.y;
			
			           
			break;	
		}
			// Fun stuff!
			// Change color on the Blobb
		case sf::Event::MouseWheelScrolled:
		{
			if (event.mouseWheel.delta > 0)
			{
				std::cout << " Mousescrooool: " << event.mouseWheelScroll.delta << " : " << event.mouseWheelScroll.x << std::endl;
			}
		break;
		}
		case sf::Event::MouseWheelMoved:
		{
			std::cout << "Your zoom doesn't work on me: " << event.mouseWheelScroll.delta << " : " << event.mouseWheelScroll.x << std::endl;
			break;
		}
		case sf::Event::MouseMoved:
		{
			// Some fluffy trail after the mouse pointer?
			// auto mousePos = sf::Mouse::getPosition(_renderWindow);
			// ball1.x = mousePos.x - shapeRadius;
			// ball1.y = mousePos.y - shapeRadius;
			// std::cout << "Mousepos: " << mousePos.x << ":" << mousePos.y << std::endl;
			// shape.setPosition(b);
			break;
		}
		default:
			break;


	}
}

void Game::renderFrame()
{
	// sf::RenderWindow& window = *getContext().window;
	_renderWindow.clear();
	sf::RenderStates states;

	// m_ball1->draw(_renderWindow, states);
	// _renderWindow.draw(*shape);
	for (auto& entity: m_Entities)
	{
		entity->draw(_renderWindow, states);
	}

	_renderWindow.display();
}