#include <iostream>

int main()
{
	int x=123;		//x도 객체, x는 숫자를 담을 수 있는 공간을 메모리에 차지하고 있다.

	int y = 10;		//initialization

	int z(7);		//
	x = 5; //assignment(대입 연산자)

	std::cout << x << std::endl;
	std::cout << &x << std::endl;
	return 0;
}