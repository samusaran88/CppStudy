#include "OrcShaman.h"

OrcShaman::OrcShaman()
{
	_HP = 100;
	_MP = 250;
	_Atk = 40;
	_Def = 3;

	cout << "��ũ �ּ��� �� ü�� : " << _HP << endl;
	cout << "��ũ �ּ��� �� ���� : " << _MP << endl;
	cout << "��ũ �ּ��� �� ���ݷ� : " << _Atk << endl;
	cout << "��ũ �ּ��� �� ���� : " << _Def << endl;

	qSkill();
	wSkill();
	eSkill();
	rSkill();
}


OrcShaman::~OrcShaman()
{

}

void OrcShaman::qSkill(void)
{
	cout << "��ũ �ּ��� Q��ų : ��ħ" << endl;
	cout << "�ָ� �������� �� �߸� ���̸��ø� ū�ϳ���" << endl;
}

void OrcShaman::wSkill(void)
{
	cout << "��ũ �ּ��� W��ų : ����" << endl;
	cout << "���� ���Ͷ���~~~ ���Ͷ���~~~" << endl;
}

void OrcShaman::eSkill(void)
{
	cout << "��ũ �ּ��� E��ų : ���̾" << endl;
	cout << "���� ����Ҹ��� ��ų�� ���Դ�" << endl;
}

void OrcShaman::rSkill(void)
{
	cout << "��ũ �ּ��� R��ų : �����̾�" << endl;
	cout << "���� �����Ŷ�~" << endl;
}
