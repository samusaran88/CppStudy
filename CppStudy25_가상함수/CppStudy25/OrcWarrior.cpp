#include "OrcWarrior.h"

OrcWarrior::OrcWarrior()
{
	_HP = 300;
	_MP = 15;
	_Atk = 30;
	_Def = 15;

	cout << "��ũ �׷�Ʈ �� ü�� : " << _HP << endl;
	cout << "��ũ �׷�Ʈ �� ���� : " << _MP << endl;
	cout << "��ũ �׷�Ʈ �� ���ݷ� : " << _Atk << endl;
	cout << "��ũ �׷�Ʈ �� ���� : " << _Def << endl;

	qSkill();
	wSkill();
	eSkill();
	rSkill();
}


OrcWarrior::~OrcWarrior()
{

}

void OrcWarrior::qSkill(void)
{
	cout << "��ũ �׷�Ʈ Q��ų : ��ġ��" << endl;
	cout << "��ü�� ������ �� ��ȭ�� �׷�Ʈ�� �Ӹ��� �ڽ��ϴ�" << endl;
}

void OrcWarrior::wSkill(void)
{
	cout << "��ũ �׷�Ʈ W��ų : ����" << endl;
	cout << "�ǿ� ������ ������ ���� �մϴ�" << endl;
}

void OrcWarrior::eSkill(void)
{
	cout << "��ũ �׷�Ʈ E��ų : ��ũ����" << endl;
	cout << "����� ��ü�� ��⸦ �ø��ϴ�" << endl;
}

void OrcWarrior::rSkill(void)
{
	cout << "��ũ �׷�Ʈ R��ų : �㸮����" << endl;
	cout << "��ģ ȯ�濡�� ��ƿ� �׵��� �ڿ��� �������� ������ �մϴ�" << endl;
}
