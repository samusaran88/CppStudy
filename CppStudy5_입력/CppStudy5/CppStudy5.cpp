// CppStudy5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//#pragma warning(suppress:4996)
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

int main()
{
	//출력
	cout << "이것은 출력" << endl;

	//입력
	//cin >>

	int num;
	
	cin >> num;
	
	cout << "num의 값 : " << num << endl;

	//c++ -> cout , cin
	//C -> printf, scanf

	// \n == endl  \t == tab키 누른 것처럼 8칸 띄워줌
	printf("라인 바꾸기\n");

	int playerHP = 300;
	int playerAtk = 10;
	//int num;

	printf("체력은 : %d, 공격력은 : %d\n", playerHP, playerAtk);

	scanf("%d", &num);
	//scanf_s("%d", &num);
	printf("%d", num);
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
