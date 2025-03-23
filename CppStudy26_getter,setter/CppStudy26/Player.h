#pragma once
#include <iostream>

using namespace std;

class Player
{
private:
	int hp;
	int atk;

public:
	Player();
	~Player();

	void stateOutput(void);

	//접근자
	int getPlayerHP() { return hp; }
	int getPlayerAtk() { return atk; }

	//설정자
	void setPlayerHP(int value) { hp = value; }
};

