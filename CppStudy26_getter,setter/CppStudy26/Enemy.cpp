#include "Enemy.h"

Enemy::Enemy()
{
	hp = 200;
	atk = 50;
}

Enemy::~Enemy()
{
}

void Enemy::stateOutput(void)
{
	cout << "Àû Ã¼·Â : " << hp << endl;
}
