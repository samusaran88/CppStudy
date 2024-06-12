// CppStudy8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));

	int batter1, batter2, batter3;		//타자
	int pitcher1, pitcher2, pitcher3;	//투수
	int strikeCount = 0;				//스트라이크 변수
	int ballCount = 0;					//볼			변수
	int roundCount = 9;					//라운드		변수

	while (true)
	{
		batter1 = rand() % 9 + 1;
		batter2 = rand() % 10;
		if (batter2 == batter1) continue;
		batter3 = rand() % 10;
		if (batter3 == batter2 || batter3 == batter1) continue;

		cout << batter1 << " : " << batter2 << " : " << batter3 << endl;
		//char c = cin.get();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		break;
	} 

	cout << "10라운드 안에 삼진 아웃을 잡아라!" << endl;

	while (true)
	{
		cout << "첫번째 수 입력하시오 : ";
		cin >> pitcher1;
		if (pitcher1 == 0 || pitcher1 > 9)
		{
			cout << " 1 ~ 9까지만 입력해라" << endl;
			continue;
		}

		cout << "두번째 수 입력하시오 : ";
		cin >> pitcher2;
		if (pitcher2 < 0 || pitcher2 > 9)
		{
			cout << " 0 ~ 9까지만 입력해라" << endl;
			continue;
		}

		cout << "세번째 수 입력하시오 : ";
		cin >> pitcher3;
		if (pitcher3 < 0 || pitcher3 > 9)
		{
			cout << " 0 ~ 9까지만 입력해라" << endl;
			continue;
		}

		//cin >> pitcher1 >> pitcher2 >> pitcher3;

		if (pitcher1 == batter1) strikeCount++;
		if (pitcher2 == batter1) ballCount++;
		if (pitcher3 == batter1) ballCount++;
		if (pitcher1 == batter2) ballCount++;
		if (pitcher2 == batter2) strikeCount++;
		if (pitcher3 == batter2) ballCount++;
		if (pitcher1 == batter3) ballCount++;
		if (pitcher2 == batter3) ballCount++;
		if (pitcher3 == batter3) strikeCount++;

		if (strikeCount < 1 && ballCount < 1)
		{
			cout << "아웃!" << endl;
		}
		else if (strikeCount > 0 && ballCount < 1)
		{
			cout << strikeCount << " 스트라이크!" << endl;
		}
		else if (strikeCount < 1 && ballCount > 0)
		{
			cout << ballCount << " 볼" << endl;
		}
		else
		{
			cout << strikeCount << " 스트라이크 " << ballCount << " 볼 ~" << endl;
		}
		//승리조건
		if (strikeCount == 3)
		{
			cout << "올~ㅋ" << endl;
			break;
		}

		strikeCount = ballCount = 0;

		cout << roundCount << " 라운드 남았다" << endl;
		roundCount--;
		//패배조건
		if (roundCount < 0)
		{
			cout << "아유 이사람아 이걸 못맞추니" << endl;
			cout << "정답은 : " << batter1 << " : " << batter2 <<  " : " << batter3 << endl;
			break;
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
