//7.1 매개변수와 실인자의 구분
#include <iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y)	//x와 y는 매개변수
{
	return x + y;
}

int main()
{
	int x = 1, y = 2;

	foo(6, 7);		//이때 6과7은 arguments 실인자
	foo(x, y + 1);	//1과 3이라는 값이 argument

	return 0;
}