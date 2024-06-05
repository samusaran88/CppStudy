// CppStudy6.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
	//조건문
	//if 만약에 ~~ 라면
	//조건식이 참이여야 실행이 된다
	//1.if


	//여러분은 새로운 던전을 생성하라는 임무가 떨어졌다
	//이 던전은 레벨 60 이상이고, 특정 보스를 잡았을때
	//떨어지는 던전 입장권이 있어야 출입이 가능하다

	srand(time(NULL));

	int level;
	bool ticket = rand() % 2;

	cout << boolalpha;

	cout << "입장권을 떨궜나? : " << ticket << endl;

	cout << "레벨이 어찌되시요? ";
	cin >> level;

	if (level < 60 && ticket == false)
	{
		cout << "레벨도 안되고 입장권도 없으니 썩 돌아가!" << endl;
	}
	else if (level >= 60 && ticket == false)
	{
		cout << "입장권만 구입해 오시요!" << endl;
	}
	else if (level < 60 && ticket == true)
	{
		cout << "레벨을 좀 더 올려오시요!" << endl;
	}
	else
	{
		cout << "웰컴 ^^*" << endl;
	}

	//조건문
	//2. switch
	//참일때 발동한다
	//정수나 열거형만 쓸수 있다
	//스위치로 되는 건, if문으로도 된다 
	int selectNum;

	cout << "소환사의 협곡에 오신걸 환영합니다" << endl;
	cout << "플레이하실 챔프를 선택해주십시요 " << endl;
	cout << "1. 아리, 2. 가렌, 3. 티모, 4. 신짜오 5. 리신" << endl;

	cout << "번호입력 : ";
	cin >> selectNum;

	switch (selectNum)
	{
		case 1:		//if(selectNum == 1)
			cout << "아리를 픽하셨습니다" << endl;
		break;
		case 2:		//else if(selectNum == 2)
			cout << "가렌을 픽하셨습니다" << endl;
		break;
		case 3:
			cout << "티모를 픽하셨습니다" << endl;
		break;
		case 4:
			cout << "신짜오를 픽하셨습니다" << endl;
		break;
		case 5:
			cout << "리신을 픽하셨습니다" << endl;
		break;
		default://else
			cout << "랜덤 픽 합니다" << endl;
		break;
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
