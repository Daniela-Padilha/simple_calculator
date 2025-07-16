/* ******************************************************************************/
/*                                                                              */
/*  File:       buttons.cpp                                    /\_/\            */
/*  Author:     Daniela Padilha                               ( o.o )           */
/*  Created:    2025/07/16 20:07:26                            > ^ <            */
/*  Updated:    2025/07/16 22:58:42                                             */
/*                                                                              */
/* ******************************************************************************/

#include "inc/cal.hpp"

void	layout(sf::RenderWindow& window)
{
	sf::RectangleShape screen;

	//Horizontal lines
	screen.setSize(sf::Vector2f(480, BUTTON_THICKNESS));
	screen.setFillColor(CustomColors::PRed);
	screen.setPosition(10, 10);
	window.draw(screen);
	screen.setPosition(10, 110);
	window.draw(screen);
	screen.setPosition(10, 200);
	window.draw(screen);
	screen.setPosition(10, 290);
	window.draw(screen);
	screen.setPosition(10, 380);
	window.draw(screen);
	screen.setPosition(10, 470);
	window.draw(screen);
	screen.setPosition(10, 560);
	window.draw(screen);

	//Vertical lines
	screen.setSize(sf::Vector2f(BUTTON_THICKNESS, 450));
	screen.setPosition(130, 110);
	window.draw(screen);
	screen.setPosition(250, 110);
	window.draw(screen);
	screen.setPosition(370, 110);
	window.draw(screen);
	

	//Outside vertical lines
	screen.setSize(sf::Vector2f(BUTTON_THICKNESS, 550));
	screen.setPosition(10, 10);
	window.draw(screen);
	screen.setPosition(490, 10);
	window.draw(screen);

}
