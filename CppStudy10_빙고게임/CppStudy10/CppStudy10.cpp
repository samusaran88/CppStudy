// CppStudy10.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));

	int number[25];
	int dest, sour, temp;
	int bingoCount = 0;
	int inputNum;

	//초기화
	for (int i = 0; i < 25; i++)
	{
		number[i] = i + 1;
	}

	//셔플
	for (int i = 0; i < 777; i++)
	{
		dest = rand() % 25;
		sour = rand() % 25;

		temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}

	while (true)
	{
		system("cls");
		cout << "=========== B I N G O G A M E ===========" << endl;
		cout << "\t\t\t\t" << bingoCount << " 개 빙고" << endl;
		cout << "=========================================" << endl;

		//출력 창
		for (int i = 0; i < 25; i++)
		{
			if (number[i] == 35)
			{
				cout << (char)number[i] << "\t";
			}
			else cout << number[i] << "\t";

			if ((i + 1) % 5 == 0) cout << "\n\n\n";
		}
		bingoCount = 0;

		cout << "입력 : ";
		cin >> inputNum;

		for (int i = 0; i < 25; i++)
		{
			if (inputNum == number[i])
			{
				number[i] = 35;
			}
		}

		for (int i = 0; i < 5; i++)
		{
			//가로 검출
			if (number[i * 5] == 35 &&
				number[i * 5 + 1] == 35 &&
				number[i * 5 + 2] == 35 &&
				number[i * 5 + 3] == 35 &&
				number[i * 5 + 4] == 35)
			{
				bingoCount++;
			}

			//세로 검출
			if (number[i] == 35 &&
				number[i + 5] == 35 &&
				number[i + 5 * 2] == 35 &&
				number[i + 5 * 3] == 35 &&
				number[i + 5 * 4] == 35)
			{
				bingoCount++;
			}
		}

		if (number[0] == 35 &&
			number[6] == 35 &&
			number[12] == 35 &&
			number[18] == 35 &&
			number[24] == 35)
		{
			bingoCount++;
		}

		if (number[4] == 35 &&
			number[8] == 35 &&
			number[12] == 35 &&
			number[16] == 35 &&
			number[20] == 35)
		{
			bingoCount++;
		}


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
