// CppStudy3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
//#include <time.h> //난수 발생
//#include <ctime>

using namespace std;

int main()
{ 
	//연산자
	//산술연산자
	//	+		더하기			수를 더한다
	//	-		빼기				수를 빼기
	//	*		곱하기			수를 곱한다
	//	/		나누기			수를 나눈다
	//	%		나머지			?


	//srand(100);
	//cout << rand() << endl;
	//cout << rand() << endl;
	//cout << rand() << endl;
	//cout << rand() << endl;
	//cout << rand() << endl;


	//컴파일 할때마다 랜덤하게 수를 가져오고 싶을땐~
	srand(time(NULL));

	int dice = rand() % 6 + 1;
	//rand() ->  0 ~ RAND_MAX = 32767
	
	cout << "앞으로 " << dice << "칸 가시오" << endl;
	
	//bool result = rand() % 2;
	//cout << result << endl;

	//bool result2 = 0;
	//bool result3 = -1;
	//cout << result2 << endl;
	//cout << result3 << endl;

	//int num = rand();
	//int num2 = rand(); 
	//cout << num << endl;
	//cout << num2 << endl;

	int lottoNum = rand() % 45 + 1;
	int lottoNum1 = rand() % 45 + 1;
	int lottoNum2 = rand() % 45 + 1;
	int lottoNum3 = rand() % 45 + 1;
	int lottoNum4 = rand() % 45 + 1;
	int lottoNum5 = rand() % 45 + 1;


	cout << lottoNum << endl;
	cout << lottoNum1 << endl;
	cout << lottoNum2 << endl;
	cout << lottoNum3 << endl;
	cout << lottoNum4 << endl;
	cout << lottoNum5 << endl;
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
