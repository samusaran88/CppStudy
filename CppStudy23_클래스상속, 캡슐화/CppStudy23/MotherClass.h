#pragma once
#include <iostream>

using namespace std;

//부모 클래스
class MotherClass
{
private:
	int privateMoney;		//어머니의 비자금

protected:
	int familyMoney;		//가계비 생활비

public:
	int publicMoney;		//공금, 열린 계좌

	MotherClass();
	~MotherClass();
};

