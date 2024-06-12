// CppStudy12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));

	int card[52];					//카드는 52장
	int symbol[3], number[3];		//실제로 화면에 출력될건 3장
	int dest, sour, temp;
	int betting;
	int money = 1000000;
	int turn = 2;					//카드 버리는 변수

	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}

	for (int i = 0; i < 100; i++)
	{
		dest = rand() % 52;
		sour = rand() % 52;

		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}


	while (true)
	{
		//카드 처리부터 우선 합시다
		for (int i = 0; i < 3; i++)
		{
			symbol[i] = card[i + turn - 2] / 13;	//문양은 4개
			number[i] = card[i + turn - 2] % 13;	//숫자는 13개

			if (i == 2) break;	//예외처리는 필수

			switch (symbol[i])
			{
			case 0:
				cout << "♠";
				break;
			case 1:
				cout << "◆";
				break;
			case 2:
				cout << "♥";
				break;
			case 3:
				cout << "♣";
				break;
			}

			switch (number[i])
			{
			case 0:
				cout << "A\t";
				break;
			case 10:
				cout << "J\t";
				break;
			case 11:
				cout << "Q\t";
				break;
			case 12:
				cout << "K\t";
				break;
			default:
				cout << number[i] + 1 << "\t";
				break;
			}
		}
		 
		cout << "현재 소지금 : " << money << endl;
		cout << "밑장 빼다 걸리면 손모가지 날아가는거 아시쥬~" << endl;
		cout << "(최소 배팅액은 10000)배팅을 해봐 : ";

		cin >> betting;

		cout << "당신의 카드는 : ";
		switch (symbol[2])
		{
		case 0:
			cout << "♠";
			break;
		case 1:
			cout << "◆";
			break;
		case 2:
			cout << "♥";
			break;
		case 3:
			cout << "♣";
			break;
		}

		switch (number[2])
		{
		case 0:
			cout << "A\t";
			break;
		case 10:
			cout << "J\t";
			break;
		case 11:
			cout << "Q\t";
			break;
		case 12:
			cout << "K\t";
			break;
		default:
			cout << number[2] + 1 << "\t";
			break;
		}
		cout << endl;


		if (betting < 10000 || betting > money)
		{
			cout << "최소배팅액보다 적게 걸었거나, 소지금보다 많이 거셨어요" << endl;
			continue;
		}

		if ((number[0] < number[2] && number[2] < number[1]) ||
			(number[1] < number[2] && number[2] < number[0]))
		{
			cout << betting << " 획득!" << endl;
			money += betting;
		}
		else
		{
			cout << betting << " 잃음!" << endl;
			money -= betting;
		}

		if (money < 10000)
		{
			cout << "한강물 차가워지고 있는데 어쩌나~" << endl;
			break;
		}

		cout << endl << endl;
		turn += 3;
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
