#include<SFML/Graphics.hpp>

int main() {

	sf::RenderWindow window(sf::VideoMode(500, 300), "hola");

	sf::Texture texture;
	texture.loadFromFile("erickpelon.jpeg");

	sf::Sprite sprite;
	sprite.setTexture(texture);

	while (window.isOpen()) {

		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.draw(sprite);
		window.display();

	}


	return 0;
}