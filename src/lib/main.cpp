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

};
