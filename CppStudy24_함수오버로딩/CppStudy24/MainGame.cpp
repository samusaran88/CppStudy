#include "MainGame.h"

MainGame::MainGame()
{
}

MainGame::~MainGame()
{
}

void MainGame::output(void)
{
	cout << "������ ��ſ� �� ����~" << endl;
}

void MainGame::output(int day)
{
	cout << day << "�� �� ��ſ� �� ����~" << endl;
}

void MainGame::attack(int atk, int hp)
{
	cout << atk << "��ŭ ���ݹ޾Ƽ� " << hp << "��ŭ �ǰ� ���Ҵ�" << endl;
}

void MainGame::attack(int atk, int hp, int mp)
{
	cout << "��ų���! ���� : " << mp << "��  �Ҹ��ߴ�" << endl;
	cout << atk << "��ŭ�� ������" << endl;
	cout << "HP�� " << hp << " ���Ҵ�" << endl;
}

void MainGame::attack(int itemNum)
{
	cout << itemNum << "��° �������� ����ؼ� ����!" << endl;
}

void MainGame::attack(float CriDam)
{
	cout << CriDam << "Ȯ���� ũ��Ƽ�� ����!" << endl;
}
