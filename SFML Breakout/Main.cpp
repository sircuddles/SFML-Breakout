#include <SFML/Graphics.hpp>
#include <iostream>

void main () {
	sf::RenderWindow gameWindow(sf::VideoMode(1024, 768, 32), "SFML Breakout");

	while (gameWindow.isOpen()) {
		sf::Event gameEvents;

		// Poll window for events
		while (gameWindow.pollEvent(gameEvents)) {

			// If ESC or Close is pressed, close the window
			if ((gameEvents.type == sf::Event::Closed) || (gameEvents.key.code == sf::Keyboard::Escape))
				gameWindow.close();



		} // END gameWindow.pollEvent
	

		// Display the screen
		gameWindow.display();

		// Clear the screen 
		gameWindow.clear(sf::Color::White);
	} // END gameWindow.isOpen
};