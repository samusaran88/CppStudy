#include "ChildClass.h"

ChildClass::ChildClass()
{
	publicMoney = 1000;
	familyMoney = 5000;

	cout << "자식클래스 생활비 : " << familyMoney << endl;
	cout << "자식클래스 공금 : " << publicMoney << endl;
}

ChildClass::~ChildClass()
{
}
