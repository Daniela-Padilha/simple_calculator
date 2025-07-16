/* ******************************************************************************/
/*                                                                              */
/*  File:       buttons.cpp                                    /\_/\            */
/*  Author:     Daniela Padilha                               ( o.o )           */
/*  Created:    2025/07/16 20:07:26                            > ^ <            */
/*  Updated:    2025/07/16 23:58:33                                             */
/*                                                                              */
/* ******************************************************************************/

#include "inc/cal.hpp"

void	layout(sf::RenderWindow& window)
{
	sf::RectangleShape line;

	//Horizontal lines
	line.setSize(sf::Vector2f(480, BUTTON_THICKNESS));
	line.setFillColor(CustomColors::PRed);
	line.setPosition(10, 10);
	window.draw(line);
	line.setPosition(10, 110);
	window.draw(line);
	line.setPosition(10, 200);
	window.draw(line);
	line.setPosition(10, 290);
	window.draw(line);
	line.setPosition(10, 380);
	window.draw(line);
	line.setPosition(10, 470);
	window.draw(line);
	line.setPosition(10, 560);
	window.draw(line);

	//Vertical lines
	line.setSize(sf::Vector2f(BUTTON_THICKNESS, 450));
	line.setPosition(130, 110);
	window.draw(line);
	line.setPosition(250, 110);
	window.draw(line);
	line.setPosition(370, 110);
	window.draw(line);
	
	//Outside vertical lines
	line.setSize(sf::Vector2f(BUTTON_THICKNESS, 550));
	line.setPosition(10, 10);
	window.draw(line);
	line.setPosition(490, 10);
	window.draw(line);
}

void drawText(sf::RenderWindow& window)
{
	sf::Font font;
	if (!font.loadFromFile("assets/Nunito-Regular.ttf"))
	{
		std::cerr << "Error loading font" << std::endl;
		return ;
	}
	int nbrs = 9;
	int y = 215;
	int x = 300;
	while (y <= 400)
	{
		while (x >= 60)
		{
			if (nbrs < 1)
				break ;
			sf::Text nbr(std::to_string(nbrs), font, 50);
			nbr.setFillColor(CustomColors::PRed);
			nbr.setPosition(x, y);
			window.draw(nbr);
			nbrs--;
			x -= 120;
		}
		y += 90;
		x = 300;
	}
	sf::Text zero("0", font, 50);
	zero.setFillColor(CustomColors::PRed);
	zero.setPosition(180, 490);
	window.draw(zero);
}
