/* ******************************************************************************/
/*                                                                              */
/*  File:       events.cpp                                     /\_/\            */
/*  Author:     Daniela Padilha                               ( o.o )           */
/*  Created:    2025/07/17 00:26:18                            > ^ <            */
/*  Updated:    2025/07/17 00:54:28                                             */
/*                                                                              */
/* ******************************************************************************/

#include "inc/cal.hpp"

void handleMouseClick(sf::Event& event)
{
	if (event.type == sf::Event::MouseButtonPressed
		&& event.mouseButton.button == sf::Mouse::Left)
	{
		int x = event.mouseButton.x;
		int y = event.mouseButton.y;
		int col = (x - PADDING) / 120;
		int row = (y - 110) / 90;
		std::cout << "(" << col << "," << row << ")" << " cell was clicked" << std::endl;
		if (row >= 1 && row < 4 && col < 3)
			std::cout << "nbr\n";
	}
}
