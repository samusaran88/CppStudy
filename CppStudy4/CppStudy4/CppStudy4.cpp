// CppStudy4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
	//관계연산자
	// a > b		a는 b보다 크다
	// a < b		a는 b보다 작다
	// a >= b		a는 b보다 같거나 크다
	// a <= b		a는 b보다 같거나 작다
	// a == b		a는 b와 같다
	// a != b		a는 b와 같지 않다

	//논리연산자
	// a && b		a AND b			a도 참이고, b도 참일때
	// a || b		a OR  b			a와 b 둘중 하나가 참이면
	// !a			NOT a			a가 거짓이면

	int a1 = 1;
	int a2 = -1;
	int a3 = 0;
	cout << (a1 && a2) << endl;
	cout << (a1 && a3) << endl;

	int playerHP = 300;
	int playerAtk = 10;

	int enemyHP = 200;
	int enemyAtk = 13;

	int healingPotion = 50;

	cout << "현재 플레이어 체력 : " << playerHP << endl;
	cout << "플레이어 공격력 : " << playerAtk << endl;
	cout << endl;
	cout << "현재 적 체력 : " << enemyHP << endl;
	cout << "적 공격력 : " << enemyAtk << endl;


	playerHP = playerHP - enemyAtk;

	cout << "현재 플레이어 체력 : " << playerHP << endl;


	enemyHP -= playerAtk;

	cout << "플레이어 반격 " << playerAtk << " 데미지를 적에게 주었다" << endl;
	cout << "현재 적 체력 : " << enemyHP << endl;

	playerHP += healingPotion;

	cout << "몸에 활력이 넘치는 걸 느낍니다" << healingPotion << " 만큼 회복 되었다" << endl;
	cout << "현재 플레이어 체력 : " << playerHP << endl;

	//증감연산자
	// + 1
	//++변수 == 전치 전위
	//변수++ == 후치 후위

	playerHP += 1;

	int num = 3;
	int b = 0;

	b = num++;

	cout << b << endl;
	cout << num << endl;


	//int m = 10;
	//int n = 5;
	//int result = 0; 
	//result = m++ + --n;
	//printf("m = %d, n = %d, result = %d \n", m, n, result);

	//int m = 10;
	//int n = 5;
	//int result = 0;
	//result = ++m + n--;
	//printf("m = %d, n = %d, result = %d \n", m, n, result);

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
