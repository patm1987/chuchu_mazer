#include <iostream>
#include <SFML/Window.hpp>

int main(int argc, char** argv) {
	sf::Window window(sf::VideoMode(1920, 1080), "Chu Chu Mazer");
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
	}

	std::cout << "Hello There!" << std::endl;
	return 0;
}
