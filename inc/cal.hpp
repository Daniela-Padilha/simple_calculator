/* ******************************************************************************/
/*                                                                              */
/*  File:       cal.hpp                                        /\_/\            */
/*  Author:     Daniela Padilha                               ( o.o )           */
/*  Created:    2025/07/16 20:06:11                            > ^ <            */
/*  Updated:    2025/07/16 20:06:11                                             */
/*                                                                              */
/* ******************************************************************************/

#ifndef CAL_HPP
# define CAL_HPP

# include <SFML/Graphics.hpp>
# include <iostream>

const float SCREEN_SIZE = 480.0f;
const float PADDING = 10.0f;
const float BUTTON_SIZE = 160.0f;
const float BUTTON_THICKNESS = 3.5f;

namespace CustomColors
{
	const sf::Color PYellow(245, 245, 220, 255);
	const sf::Color PGreen(232, 246, 239, 255);
	const sf::Color PRed(250, 218, 221, 255);
};

void	layout(sf::RenderWindow& window);
void 	drawText(sf::RenderWindow& window);
void 	drawOperators(sf::RenderWindow& window, sf::Font& font);
void 	drawSpecial(sf::RenderWindow& window, sf::Font& font);

#endif