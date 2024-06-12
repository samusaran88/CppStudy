// CppStudy18.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

void output(void)
{
	cout << "자 게임을 시작하지" << endl;
}

void gugudan(int num)
{
	for (int i = 1; i < 10; i++)
	{
		cout << num << " X " << i << " = " << num * i << endl;
	}
}

//            공격자 이름변수  체력변수  방어자 이름변수   공격력 변수
int attack(char* DealerName, int hp, char* tankerName, int atk)
{
	hp -= atk;

	cout << DealerName << "의 공격!" << atk << "만큼의 데미지! " << endl;
	cout << tankerName << "의 현 체력 : " << hp << endl;

	return hp;
}

void main(void) 
{
	output();
	output();
	gugudan(3);
	gugudan(5);
	gugudan(8);

	//const char* OrcName = "뜨랄";
	//const char* orcName = "뜨랄";
	//char* OrcName = _strdup(orcName);
	char OrcName[] = "뜨랄";
	int OrcHP = 500;
	int OrcAtk = 40;

	//const char* UndeadName = "실바나스";
	//const char* undeadName = "실바나스";
	//char* UndeadName = _strdup(undeadName);
	char UndeadName[] = "실바나스";
	int UndeadHP = 300;
	int UndeadAtk = 20;

	OrcHP = attack(UndeadName, OrcHP, OrcName, UndeadAtk);
	UndeadHP = attack(OrcName, UndeadHP, UndeadName, OrcAtk);

	OrcHP = attack(UndeadName, OrcHP, OrcName, UndeadAtk);
	UndeadHP = attack(OrcName, UndeadHP, UndeadName, OrcAtk);

	OrcHP = attack(UndeadName, OrcHP, OrcName, UndeadAtk);
	UndeadHP = attack(OrcName, UndeadHP, UndeadName, OrcAtk);


}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
