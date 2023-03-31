//리터럴, 피연산자
#include <iostream>

using namespace std;

int main()
{
	int x = 2;		//문자열 , 

	cout << 1 + 2 << endl;	//1과 2는 리터럴 , 1+2는 표현식

	cout << x + 2 << endl;	//x와 2는 피연산자 (Operand), + 연산자(Operator)

	cout << -x << endl;		//단항연산자

	cout << 1 + 2 << endl;	//이항연산자

	int y = (x > 0) ? 1 : 2;//삼항연산자 ? 좌측이 참이면 1 거짓이면 2

	cout << "Hello" << endl;

	return 0;
}