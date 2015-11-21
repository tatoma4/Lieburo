#ifndef MENU_HH
#define MENU_HH

#include "SFML/Graphics.hpp"

#define MAX_NUMBER_OF_ITEMS 3

class Menu {
public:
	Menu(int width, int height);
	~Menu();

	void draw(sf::RenderWindow &window);
	void moveUp();
	void moveDown();
	int getPressedItem();
	bool showScreen;

private:
	int selectedItemIndex;
	sf::Font font;
	sf::Text menu[MAX_NUMBER_OF_ITEMS];
};

#endif