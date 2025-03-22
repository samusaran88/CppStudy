#include "MotherClass.h"

MotherClass::MotherClass()
{
	privateMoney = 30000;
	familyMoney = 10000;
	publicMoney = 500;

	cout << "부모클래스 어머니 비자금 : " << privateMoney << endl;
	cout << "부모클래스 생활비 : " << familyMoney << endl;
	cout << "부모클래스 공금 : " << publicMoney << endl;
}

MotherClass::~MotherClass()
{
}
