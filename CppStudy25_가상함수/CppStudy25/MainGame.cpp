#include "MainGame.h"

MainGame::MainGame()
{
	_warrior = new OrcWarrior;
	_shaman = new OrcShaman;
}

MainGame::~MainGame()
{
	delete _warrior;
	delete _shaman;
}
