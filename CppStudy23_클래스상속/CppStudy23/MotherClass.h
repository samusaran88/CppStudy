#pragma once
#include <iostream>

using namespace std;

//�θ� Ŭ����
class MotherClass
{
private:
	int privateMoney;		//��Ӵ��� ���ڱ�

protected:
	int familyMoney;		//����� ��Ȱ��

public:
	int publicMoney;		//����, ���� ����

	MotherClass();
	~MotherClass();
};

