//전역 변수, 정적 변수, 내부 연결, 외부 연결
#include <iostream>
#include "MyConstance.h"
using namespace std;

int value = 125;

extern void doSomething();		//test.cpp파일에 있는 doSomething()함수를 사용하기 위해 전방선언, extern키워드생략 가능, 어딘가 다른파일에 있으니 사용가능
extern int u;
//
//void dosomething()
//{
//	static int a = 1;	//os로 부터 받은 메모리가 정적, 이 영역 안의 변수가 선언될 때 같은 메모리를 사용
//	++a;				//초기화를 한번밖에 하지 않음, 초기화가 반드시 필요
//	cout << a << endl;
//}

int main()
{
	//cout << value << endl;

	//int value = 2;

	//cout << value << endl;
	//cout << ::value << endl;	//전역변수를 사용하는 방법

	doSomething();
	doSomething();

	cout << u << endl;

	cout << "in CHapter04_02"<<Constants::pi << "  " << &Constants::pi<< endl;

	return 0;
}

//		int g_x;			external linkage 
//		static int g_x;		internal linkage
//		const int g_x;		사용할 수 없음
// 
//		extern int g_z;
// 
// 
// 
//		