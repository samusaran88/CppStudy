// CppStudy16.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h> 
//#include <cstdio>

using namespace std;

int main()
{
	//C - scanf
	//C++ - cin
	//위에 것 공통점 : 엔터, 스페이스, 탭이나 다 구분하기 때문에 공백이
	//					나오면 문자열 끝인줄 알고 손실이 일어남

	//아래의 것 공통점  - 엔터로만 구분한다
	//C - gets
	//C++ - cin.getline()

	char str[128];

	//gets(str); -> deprecated
	gets_s(str);

	const char* separator = " ";
	char* token;

	char* context = NULL;
	//strtok를 대신하는 더 안전한 함수
	//context에는 문자열을 분리하고 남은 부분이 들어간다.
	token = strtok_s(str, separator, &context);

	cout << token << endl;

	//home sweet home

	//      0 아니면 (토큰에 담겨있는거중에 구분자를 통해서 공백을 잘랐을때)
	//뭔가 안잘릴때까지 계속 잘라봐라
	while (NULL != (token = strtok_s(NULL, separator, &context)))
	{
		cout << token << endl;
	}




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
