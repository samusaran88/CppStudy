#include "MainGame.h"

MainGame::MainGame()
{ 
	player = new Player;
	enemy = new Enemy;

	player->stateOutput();
	enemy->stateOutput();
	
	enemy->setEnemyHP(enemy->getEnemyHP() - player->getPlayerAtk()); 
	enemy->stateOutput();

	//int hp = enemy->getEnemyHP();
	//
	//cout << "hp : " << hp << endl;
	//
	//hp -= player->getPlayerAtk();
	//
	//cout << "hp : " << hp << endl;
	//
	//enemy->setEnemyHP(hp);
	//
	//enemy->stateOutput();
}

MainGame::~MainGame()
{
}
