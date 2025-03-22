#include "MainGame.h"

MainGame::MainGame()
{
}

MainGame::~MainGame()
{
}

void MainGame::output(void)
{
	cout << "오늘은 즐거운 내 생일~" << endl;
}

void MainGame::output(int day)
{
	cout << day << "일 뒤 즐거운 내 생일~" << endl;
}

void MainGame::attack(int atk, int hp)
{
	cout << atk << "만큼 공격받아서 " << hp << "만큼 피가 남았다" << endl;
}

void MainGame::attack(int atk, int hp, int mp)
{
	cout << "스킬사용! 마나 : " << mp << "를  소모했다" << endl;
	cout << atk << "만큼의 데미지" << endl;
	cout << "HP가 " << hp << " 남았다" << endl;
}

void MainGame::attack(int itemNum)
{
	cout << itemNum << "번째 아이템을 사용해서 공격!" << endl;
}

void MainGame::attack(float CriDam)
{
	cout << CriDam << "확률로 크리티컬 공격!" << endl;
}
