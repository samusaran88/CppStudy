// CppStudy15.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
	//캐릭터 배열에서는 문자열의 끝을 알리는 NULL(0) 값이 있기때문에
	//공간 하나(버퍼) 를 더 잡아주어야 한다
	//char str[5] = "abcd";

	//1. strlen
	//string length 의 줄임말로
	//문자열의 길이 값을 반환해주는 함수

	char str[10] = "abcde";

	int num = strlen(str);

	cout << "num의 값은 : " << num << endl;

	//2. strcmp
	//문자열 2개를 비교를 한다
	//메모리번지가 아닌 아스키 코드값에 기초한다
	//같으면 0, 왼쪽이크면 1, 오른쪽이 크면 -1을 반환한다

	char str1[10] = "abc";
	char str2[10] = "abc";

	int check = strcmp(str1, str2);

	cout << "check 결과 : " << check << endl;

	// 간단퀴즈 
	// 문자열을 '입력' 받고
	// 거꾸로 출력 시켜보시요

	//char sample[128];
	//cin >> sample;
	//
	//for (int i = strlen(sample) - 1; i >= 0; i--)
	//{
	//	cout << sample[i];
	//}
	//

	//3. strcat
	//   문자열 이어붙이기
	//strcat(문자열1, 문자열2)
	//문자열2를 문자열1에 이어붙여준다
	//당연한 말이지만, 문자열1은 문자열2의 길이를 수용할수
	//있도록 버퍼값(배열크기) 이(가) 커야한다

	char str3[10] = "iron ";
	char str4[4] = "man";

	strcat_s(str3, str4);

	cout << str3 << endl;
	cout << str4 << endl;

	//4. 문자열 복사
	//strcpy string copy
	//strcpy(문자열1, 문자열2)
	//문자열1에 문자열2를 복사한다

	char str5[10];
	char str6[10] = "oh my god";

	strcpy_s(str5, str6);

	cout << str5 << endl;

	//====================================================

	//!사망연산자
	//삼항연산자

	// 조건 ? 참 : 거짓

	bool masterLeeLive = true;

	masterLeeLive == false ? (cout << "마이가 그럴리 없어" << endl) : (cout << "살았네! 살았어!" << endl);

	int money = 10000;
	int itemCost = 5000;

	bool isBuy = false;

	money > itemCost ? isBuy = true : isBuy = false;

	if (isBuy) cout << "아이템 구매완료" << endl;
	else cout << "소지금이 모질라요 뉴_뉴" << endl; 

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
