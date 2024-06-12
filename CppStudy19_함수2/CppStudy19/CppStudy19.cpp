// CppStudy19.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

//함수 전방선언
void output();
void battle(const char* name, int* hp, const char* name2, int atk);

struct tagHero
{
	const char* name;
	int HP;
	int Atk;
};

int main()
{
	srand(time(NULL));
	output();

	tagHero _leeSin;
	tagHero _ari;

	_leeSin.name = "리신"; 
	_leeSin.HP = 5000;

	_ari.name = "아리"; 
	_ari.HP = 5000;

	while (true)
	{
		if (_ari.HP < 0 || _leeSin.HP < 0) break;

		_leeSin.Atk = rand() % 500;
		_ari.Atk = rand() % 500;

		battle(_leeSin.name, &_leeSin.HP, _ari.name, _ari.Atk);
		battle(_ari.name, &_ari.HP, _leeSin.name, _leeSin.Atk);
	}

}

void output(void)
{
	cout << "죵말?" << endl;
}

void battle(const char* name, int* hp, const char* name2, int atk)
{
	*hp -= atk;

	cout << name2 << "이(가)" << atk << " 공격을 가해 " << name << "이(가) " << "체력이 : " << *hp << " 되었다" << endl;
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
