/* ******************************************************************************/
/*                                                                              */
/*  File:       buttons.cpp                                    /\_/\            */
/*  Author:     Daniela Padilha                               ( o.o )           */
/*  Created:    2025/07/16 20:07:26                            > ^ <            */
/*  Updated:    2025/07/17 00:35:58                                             */
/*                                                                              */
/* ******************************************************************************/

#include "inc/cal.hpp"

void	layout(sf::RenderWindow& window)
{
	sf::RectangleShape line;

	//Horizontal lines
	line.setSize(sf::Vector2f(BUTTON_WIDTH, BUTTON_THICKNESS));
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
	line.setSize(sf::Vector2f(BUTTON_THICKNESS, BUTTON_HEIGHT));
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
	drawOperators(window, font);
	drawSpecial(window, font);
}

void drawOperators(sf::RenderWindow& window, sf::Font& font)
{
	sf::Text equal("=", font, 70);
	equal.setFillColor(CustomColors::PRed);
	equal.setPosition(410, 470);
	window.draw(equal);

	sf::Text point(".", font, 70);
	point.setFillColor(CustomColors::PRed);
	point.setPosition(300, 455);
	window.draw(point);

	sf::Text sum("+", font, 70);
	sum.setFillColor(CustomColors::PRed);
	sum.setPosition(410, 380);
	window.draw(sum);

	sf::Text diff("-", font, 70);
	diff.setFillColor(CustomColors::PRed);
	diff.setPosition(415, 290);
	window.draw(diff);

	sf::Text multi("x", font, 70);
	multi.setFillColor(CustomColors::PRed);
	multi.setPosition(410, 195);
	window.draw(multi);

	sf::Text div("/", font, 70);
	div.setFillColor(CustomColors::PRed);
	div.setPosition(420, 110);
	window.draw(div);
}

void drawSpecial(sf::RenderWindow& window, sf::Font& font)
{
	sf::Text perc("%", font, 50);
	perc.setFillColor(CustomColors::PRed);
	perc.setPosition(285, 125);
	window.draw(perc);

	sf::Text del("C", font, 50);
	del.setFillColor(CustomColors::PRed);
	del.setPosition(55, 490);
	window.draw(del);

	sf::Text open("(", font, 50);
	open.setFillColor(CustomColors::PRed);
	open.setPosition(60, 125);
	window.draw(open);

	sf::Text close(")", font, 50);
	close.setFillColor(CustomColors::PRed);
	close.setPosition(185, 125);
	window.draw(close);
}
