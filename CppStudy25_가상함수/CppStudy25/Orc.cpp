#include "Orc.h"


Orc::Orc()
{
	_HP = 200;
	_MP = 10;
	_Atk = 20;
	_Def = 10;

	cout << "��ũ�� ü�� : " << _HP << endl;
	cout << "��ũ�� ���� : " << _MP << endl;
	cout << "��ũ�� ���ݷ� : " << _Atk << endl;
	cout << "��ũ�� ���� : " << _Def << endl;

}


Orc::~Orc()
{

}

void Orc::qSkill(void)
{
	cout << "��ũ���� �⺻ Q��ų : ����" << endl;
	cout << "������ ����ϴ� ��ũ�� ���� �����մϴ�" << endl;
}

void Orc::wSkill(void)
{
	cout << "��ũ���� �⺻ W��ų : �������" << endl;
	cout << "��ũ���� �б���� �⺻���� ����ϹǷ� ������°� �����մϴ�" << endl;
}

void Orc::eSkill(void)
{
	cout << "��ũ���� �⺻ E��ų : �Լ�" << endl;
	cout << "���� �߿� �Լ��� ���� ���ݷ��� �ø��ϴ�" << endl;
}

void Orc::rSkill(void)
{
	cout << "��ũ���� �⺻ R��ų : ũ�� �ֵθ���" << endl;
	cout << "������ �����ϸ� ũ�� ���⸦ �ֵθ��ϴ�" << endl;
}
