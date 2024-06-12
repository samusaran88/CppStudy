// CppStudy11.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

//구조체
//배열이 같은 변수의 연속적인 나열이라고 하면
//구조체는 서로 다른 변수의 집합체라고 할 수 있다.
//또 다른 말로 객체 라고도 한다 
//클래스와 똑같다 

struct tagCharacter		//이렇게 생겨먹었다!
{
	const char* name;
	int level;
	int currentHP;
	int maxHP;
	int currentMP;
	int maxMP;
	int currentExp;
	int maxExp;
	int meleeAtk;
	int meleeDef;
	int magicAtk;
	int magicDef;
	float turnRate;
	float agility;
	bool isDead;
	bool skillUsed;
};

int main()
{
	char name[6] = "saber";

	//기존 비쥬얼 스튜디오에서는 아래와 같은 표준에 맞지 않은 코드를 적어도 컴파일이 가능했다.
	//최근 비쥬얼 스튜디오는 표준을 맞춰주지 않으면 컴파일이 되지 않는다.
	//프로젝트 우클릭 -> 속성 -> 구성 속성 -> C/C++ -> 언어 -> 준수 모드 -> 아니오 로 설정하면 컴파일 가능하다.
	//char* p = "abcd";
	const char* p = "abcd";

	cout << p[0] << endl;
	cout << p[1] << endl;
	cout << p[2] << endl;
	cout << p[3] << endl;

	cout << p << endl;
	cout << p + 1 << endl;
	cout << p + 2 << endl;
	cout << p + 3 << endl;

	/* 출력
	Error
	Error
	Error
	Error

	p[0] = "e" -> 요건 확실히 에러

	abcd
	bcd
	cd
	d 
	*/

	tagCharacter saber;
	saber.name = "세이버";
	saber.currentHP = saber.maxHP = 200;	//세이버 쨔응의 HP
	saber.currentMP = saber.maxMP = 50;		//세이버 쨔응의 MP
	saber.currentExp = saber.maxExp = 0;	//세이버 쨔응의 겸치
	saber.isDead = false;
	saber.agility = 20.05f;


	tagCharacter* assassin = new tagCharacter();
	assassin->currentHP = assassin->maxHP = 120;
	assassin->currentMP = assassin->maxMP = 200;


	tagCharacter skeleton[3]; 
	for (int i = 0; i < 3; i++)
	{
		skeleton[i].level = 10;
		skeleton[i].currentHP = 50;
		skeleton[i].meleeAtk = 3;
	}

	return 0;
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
