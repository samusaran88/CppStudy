#include "MainGame.h"

//멤버 이니셜라이즈 : const 속성을 딱 한 번 초기화 하기 위해 
MainGame::MainGame()
	: levelMax(99),
	level(1),
	hp(100),
	mp(50),
	speed(1.0f)
{
	//levelMax = 80;
	cout << "현재 레벨 : " << level << endl;
	cout << "최대 레벨 : " << levelMax << endl;
	level = 3;
	cout << "현재 레벨 : " << level << endl;
	cout << "현재 체력 : " << hp << endl;
	cout << "현재 마력 : " << hp << endl;
	cout << "현재 이동속도 : " << speed << endl;
}

//깊은 복사와 얕은 복사, 복사생성자
MainGame::MainGame(const MainGame& other)
{
	//other.hp = 1;
	level = other.level;
	hp = other.hp;
	mp = other.mp;
	speed = other.speed;
}

MainGame::MainGame(int level)
{
	level = level;
	cout << "현재 레벨 : " << level << endl;
}

//멤버 이니셜라이즈
MainGame::MainGame(int lv, int HP, int MP, float spd)
	: level(lv),
	hp(HP),
	mp(MP),
	speed(spd)
{
	cout << "현재 레벨 : " << level << endl;
	cout << "현재 체력 : " << hp << endl;
	cout << "현재 마력 : " << mp << endl;
	cout << "현재 이동속도 : " << speed << endl;
}

MainGame::~MainGame()
{
}
