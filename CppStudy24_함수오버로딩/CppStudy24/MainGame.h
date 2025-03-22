#pragma once
#include <iostream>

using namespace std;

class MainGame
{
public: 
	MainGame();
	~MainGame();

	void output(void);
	void output(int day);
	 
	void attack(int atk, int hp); 
	void attack(int atk, int hp, int mp); 
	void attack(int itemNum);
	void attack(float CriDam);
};

