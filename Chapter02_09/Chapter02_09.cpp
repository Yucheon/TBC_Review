#include <iostream>

using namespace std;

void printNumber(int my_number)	//파라미터 자체를 바꾸는 경우는 매우 드물다.
{
	my_number = 456;			//이렇게 파라미터의 값을 함수 안에서 바꾸는 경우 함수의 입출력을 보여주기가 좋지 않기 때문에 자주 사용되지 않는다.
	cout<<my_number << endl;
}

void Re_printNumber(const int my_number)	//파라미터 자체를 바꾸는 경우는 매우 드물다.
{
	int n = 456;			//이렇게 파라미터의 값을 함수 안에서 바꾸는 경우 함수의 입출력을 보여주기가 좋지 않기 때문에 자주 사용되지 않는다.
	cout << n << endl;
}

int main()
{
	printNumber(123);

	const double gravity{ 9.8 };	//const는 초기화를 반드시 해주어야 한다.

	//gravity = 1.2;

	return 0;
}