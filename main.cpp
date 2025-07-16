/* ******************************************************************************/
/*                                                                              */
/*  File:       main.cpp                                       /\_/\            */
/*  Author:     Daniela Padilha                               ( o.o )           */
/*  Created:    2025/07/16 20:07:37                            > ^ <            */
/*  Updated:    2025/07/16 23:20:53                                             */
/*                                                                              */
/* ******************************************************************************/

#include "inc/cal.hpp"

int main ()
{
	sf::RenderWindow window (sf::VideoMode(500, 570), "Calculator");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed
				|| (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
				window.close();
		}
		window.clear(CustomColors::PYellow);
		layout(window);
		drawText(window);
		window.display();
	}
	return (0);
}
