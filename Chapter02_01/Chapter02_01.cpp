#include <iostream>
//char는 1바이트, int는 4바이트
//char은 내부적으로 정수 로 저장되기 때문에 integer타입이기도 하다
using namespace std;

int main()
{
	bool bValue = false;

	//cout << ((bValue) ? 1 : 0) << endl;


	char chValue = 'A';
	char AValue = 65;
	float fValue = 3.141592f;		//f를 써주지 않으면 double로 인식한다.
	double dValue = 3.141592;		// 파이썬은 기본적으로 double을 사용
	string f = "nani";
	
	//초기화 방법 3가지
	int a(345);						//direct  initialization
	int b = 123;					//copy    initialization	만약 3.14같은 실수를 넣으면 warning이 뜨면서 데이터 손실이 일어난다. 하지만 casting해준다.
	int c{ 123 };					//uniform initialization	좀 더 엄격함

	//다중초기화, 가독성이 떨어지므로 비추천
	int k, l, m;					//다중 선언
	int t = 2, f(31), u{ 496 };		//가능

	auto aValue = 3.141592;			//컴파일시 변수 유형이 결정


	cout << chValue << endl;		//A
	cout << (int)chValue << endl;	//65

	cout << AValue << endl;			//A
	cout << (int)AValue << endl;	//65

	cout << fValue << endl;			//3.14159	cout에서 출력할 때 자리수를 맞추어 주기 위해 전부출력되지 않음, 이진수로 실수를 표현하는 법으로 바꿔서 저장
	cout << dValue << endl;			//3.14159
		
	cout << sizeof(bool) << endl;	//sizeof함수는 변수 유형과 변수명 둘다 작동
	cout << sizeof(bValue) << endl;

	cout << sizeof(AValue) << endl;	//1
	cout << sizeof(fValue) << endl;	//4
	cout << sizeof(dValue) << endl;	//8
	cout << sizeof(a) << endl;		//4	
	cout << sizeof(f) << endl;		//32

	return 0;
} 