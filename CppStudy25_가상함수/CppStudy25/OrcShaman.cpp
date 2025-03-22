#include "OrcShaman.h"

OrcShaman::OrcShaman()
{
	_HP = 100;
	_MP = 250;
	_Atk = 40;
	_Def = 3;

	cout << "오크 주술사 의 체력 : " << _HP << endl;
	cout << "오크 주술사 의 마력 : " << _MP << endl;
	cout << "오크 주술사 의 공격력 : " << _Atk << endl;
	cout << "오크 주술사 의 방어력 : " << _Def << endl;

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
	cout << "오크 주술사 Q스킬 : 독침" << endl;
	cout << "멀리 날릴려고 숨 잘못 들이마시면 큰일난다" << endl;
}

void OrcShaman::wSkill(void)
{
	cout << "오크 주술사 W스킬 : 토템" << endl;
	cout << "제발 나와랑예~~~ 나와랑요~~~" << endl;
}

void OrcShaman::eSkill(void)
{
	cout << "오크 주술사 E스킬 : 파이어볼" << endl;
	cout << "드디어 사용할만한 스킬이 나왔다" << endl;
}

void OrcShaman::rSkill(void)
{
	cout << "오크 주술사 R스킬 : 헬파이어" << endl;
	cout << "불을 지르셔라~" << endl;
}
