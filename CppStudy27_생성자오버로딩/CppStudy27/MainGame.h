#pragma once
#include <iostream>

using namespace std;

class MainGame
{
private:
	//const int levelMax;
	const int levelMax = 50;
	int level;
	int hp;
	int mp;
	float speed;
public:
	MainGame();
	//생성자 오버로드
	MainGame(const MainGame& other);
	MainGame(int level);
	MainGame(int lv, int HP, int MP, float spd);
	~MainGame();
};

