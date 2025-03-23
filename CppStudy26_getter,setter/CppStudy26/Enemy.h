#pragma once
#include <iostream>

using namespace std;

class Enemy
{
private:
	int hp;
	int atk;

public:
	Enemy();
	~Enemy();

	void stateOutput(void);

	//접근자
	int getEnemyHP() { return hp; }
	int getEnemyAtk() { return atk; }

	//설정자
	void setEnemyHP(int value) { hp = value; }

};

