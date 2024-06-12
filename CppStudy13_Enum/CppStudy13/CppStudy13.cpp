// CppStudy13.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

//게임에서 진짜 많이 정말 잘쓰면 좋은데
//실제로 많이 쓰는 그치만 중요하진 않은 그런거

enum BULLET_POWER
{
	BULLET_IDLE,
	BULLET_POWER1,
	BULLET_POWER2,
	BULLET_POWERMAX
};

enum TEST
{
	TEST_ONE,
	TEST_TWO,
	TEST_THREE,
	TEST_FOUR
};

int main()
{
	int number[4];
	number[TEST_ONE] = 1;
	number[TEST_TWO] = 2;
	
	cout << number[1] << endl;


	BULLET_POWER bulletPower;

	int power = 0;

	//power++;

	bulletPower = (BULLET_POWER)power;

	if (bulletPower == BULLET_IDLE) bulletPower = BULLET_POWER1;

	switch (bulletPower)
	{
	case BULLET_IDLE:
		cout << "기본 총알 입니다" << endl; 
		break;
	case BULLET_POWER1:
		cout << "1단계 파워 업 총알 입니다" << endl;
		break;
	case BULLET_POWER2:
		cout << "2단계 파워 업 총알 입니다" << endl;
		break;
	case BULLET_POWERMAX:
		cout << "풀파워 업 총알 입니다" << endl;
		break;
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
