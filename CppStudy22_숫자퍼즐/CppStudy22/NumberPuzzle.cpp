#include "NumberPuzzle.h"

NumberPuzzle::NumberPuzzle()
{
	srand(time(NULL));

	int number[25];
	int dest, sour, temp;
	int save = 0;		//0 저장해둘 변수
	int key;
	int move;

	for (int i = 0; i < 25; i++)
	{
		number[i] = i;
	} 

	for (int i = 0; i < 1000; i++)
	{
		system("cls");
		cout << endl << endl;

		for (int i = 0; i < 25; i++)
		{
			cout << number[i] << "\t";

			if ((i + 1) % 5 == 0)
			{
				cout << endl << endl << endl;
			}
		}

		int dir = rand() % 4;
		if ((dir == 0 && save % 5 == 0) ||
			(dir == 1 && (save + 1) % 5 == 0) ||
			(dir == 2 && save < 5) ||
			(dir == 3 && 20 <= save && save <= 24))
		{
			i--;
			continue;
		}
		switch (dir)
		{
			case 0:
			{
				move = number[save];
				number[save] = number[save - 1];
				number[save - 1] = move;
				save--;
			}
			break;
			case 1:
			{
				move = number[save];
				number[save] = number[save + 1];
				number[save + 1] = move;
				save++;
			}
			break;
			case 2:
			{
				move = number[save];
				number[save] = number[save - 5];
				number[save - 5] = move;
				save -= 5;
			}
			break;
			case 3:
			{
				move = number[save];
				number[save] = number[save + 5];
				number[save + 5] = move;
				save += 5;
			}
			break; 
		}
	}

	//for (int i = 0; i < 100; i++)
	//{
	//	dest = rand() % 24;
	//	sour = rand() % 24;
	//
	//	temp = number[dest];
	//	number[dest] = number[sour];
	//	number[sour] = temp;
	//}


	while (true)
	{
		system("cls");
		cout << "0을 움직여 봐라" << endl;

		cout << endl;

		bool isMatch = true;
		for (int i = 0; i < 25; i++)
		{
			cout << number[i] << "\t";

			if ((i + 1) % 5 == 0)
			{
				cout << endl << endl << endl;
			}
			if (number[i] != i)
			{
				isMatch = false; 
			}
		} 
		if (isMatch)
		{
			cout << "맞추었다!!" << endl;
			break;
		}

		cout << "넘패드로 조작" << endl;
		cout << "4 : 왼쪽, 6 : 오른쪽, 8 : 위쪽, 2 : 아래쪽" << endl;

		key = _getch();

		if (key == 52 || key == 54 || key == 56 || key == 50);
		else
		{
			cout << "다른거 누르지마라" << endl;
			continue;
		}

		switch (key)
		{
		case 52:
			if (save % 5 == 0) break;
			move = number[save];
			number[save] = number[save - 1];
			number[save - 1] = move;
			save--;
			break;
		case 54:
			if ((save + 1) % 5 == 0) break;
			move = number[save];
			number[save] = number[save + 1];
			number[save + 1] = move;
			save++;
			break;
		case 56:
			if (save < 5) break;
			move = number[save];
			number[save] = number[save - 5];
			number[save - 5] = move;
			save -= 5;
			break;
		case 50:
			if (20 <= save && save <= 24) break;
			move = number[save];
			number[save] = number[save + 5];
			number[save + 5] = move;
			save += 5;
			break;
		} 
	}
}

NumberPuzzle::~NumberPuzzle()
{
}
