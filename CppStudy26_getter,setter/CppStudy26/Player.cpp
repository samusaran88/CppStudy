#include "Player.h"

Player::Player()
{
	hp = 300;
	atk = 30;
}

Player::~Player()
{
}

void Player::stateOutput(void)
{ 
	cout << "플레이어 체력 : " << hp << endl;
}
