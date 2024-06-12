// CppStudy9.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));

	//C# 배열 선언
	//int[] array1 = new int[5];
	//int[] array2 = { 1, 2, 3, 4, 5 };
	//int[,] multiDimensionalArray1 = new int[2, 3];
	//int[,] multiDimensionalArray2 = { { 1, 2, 3 }, { 4, 5, 6 } };
	//int[][] jaggedArray = new int[6][]; 
	//jaggedArray[0] = new[] {1, 2, 3}; // 3 item array
	//jaggedArray[1] = new int[10];     // 10 item array

	//C++ 배열 선언
	//int array[5][6];


	//배열 10개 선언
	int number[10];
	int dest, sour, temp;

	//배열 초기화
	for (int i = 0; i < 10; i++)
	{
		number[i] = i;
	}

	for (int i = 0; i < 5; i++)
	{
		dest = rand() % 10;//0 ~ 9   9
		sour = rand() % 10;//0 ~ 9   7
		 
		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}


	//배열 출력
	for (int i = 0; i < 10; i++)
	{
		cout << number[i] << endl;
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
