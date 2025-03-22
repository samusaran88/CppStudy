#include "OrcWarrior.h"

OrcWarrior::OrcWarrior()
{
	_HP = 300;
	_MP = 15;
	_Atk = 30;
	_Def = 15;

	cout << "오크 그런트 의 체력 : " << _HP << endl;
	cout << "오크 그런트 의 마력 : " << _MP << endl;
	cout << "오크 그런트 의 공격력 : " << _Atk << endl;
	cout << "오크 그런트 의 방어력 : " << _Def << endl;

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
	cout << "오크 그런트 Q스킬 : 박치기" << endl;
	cout << "육체적 전투에 더 강화된 그런트는 머리로 박습니다" << endl;
}

void OrcWarrior::wSkill(void)
{
	cout << "오크 그런트 W스킬 : 광분" << endl;
	cout << "피에 심취해 공격을 빨리 합니다" << endl;
}

void OrcWarrior::eSkill(void)
{
	cout << "오크 그런트 E스킬 : 워크라이" << endl;
	cout << "동료들 전체의 사기를 올립니다" << endl;
}

void OrcWarrior::rSkill(void)
{
	cout << "오크 그런트 R스킬 : 허리케인" << endl;
	cout << "거친 환경에서 살아온 그들은 자연을 본따만든 공격을 합니다" << endl;
}
