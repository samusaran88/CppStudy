#pragma once
#include "OrcShaman.h"
#include "OrcWarrior.h"

class MainGame
{
private:
	OrcWarrior* _warrior;
	OrcShaman* _shaman;
public:
	MainGame();
	~MainGame();
};

