#include "Orc.h"


Orc::Orc()
{
	_HP = 200;
	_MP = 10;
	_Atk = 20;
	_Def = 10;

	cout << "오크의 체력 : " << _HP << endl;
	cout << "오크의 마력 : " << _MP << endl;
	cout << "오크의 공격력 : " << _Atk << endl;
	cout << "오크의 방어력 : " << _Def << endl;

}


Orc::~Orc()
{

}

void Orc::qSkill(void)
{
	cout << "오크종족 기본 Q스킬 : 도발" << endl;
	cout << "전투를 사랑하는 오크는 적을 도발합니다" << endl;
}

void Orc::wSkill(void)
{
	cout << "오크종족 기본 W스킬 : 내려찍기" << endl;
	cout << "오크들은 둔기류를 기본으로 사용하므로 내려찍는걸 좋아합니다" << endl;
}

void Orc::eSkill(void)
{
	cout << "오크종족 기본 E스킬 : 함성" << endl;
	cout << "전투 중에 함성을 질러 공격력을 올립니다" << endl;
}

void Orc::rSkill(void)
{
	cout << "오크종족 기본 R스킬 : 크게 휘두르기" << endl;
	cout << "전투에 심취하면 크게 무기를 휘두릅니다" << endl;
}
