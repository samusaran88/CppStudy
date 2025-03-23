#pragma once
#include <istream>
#include "Player.h"
#include "Enemy.h"

class MainGame
{
public:
	MainGame();
	~MainGame();

private:
	Player* player;
	Enemy* enemy;
};

