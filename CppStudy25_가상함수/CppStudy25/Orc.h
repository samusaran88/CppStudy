#pragma once
#include <iostream>

using namespace std;

class Orc
{
protected:
	int _HP;
	int _MP;
	int _Atk;
	int _Def;

public:
	virtual void qSkill(void);
	virtual void wSkill(void);
	virtual void eSkill(void);
	virtual void rSkill(void);


	Orc();
	~Orc();
};