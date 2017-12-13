#pragma once
#include <SFML/Graphics.hpp>
class Game
{
public:
	Game();
	void render(sf::RenderWindow & window);
	void events(sf::RenderWindow & window);
	void loop();
	void keyboard(sf::RenderWindow & window);
	void formatWalls();
	bool isCollided(float x, float y);
	bool isWall(int row, int col);
	int whichWall(int row, int col);
	void saveLevel();
	void loadLevel();

	sf::Sprite floor;

	bool left = false;
	bool right = false;
	bool up = false;
	bool down = false;
};

