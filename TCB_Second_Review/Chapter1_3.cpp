#include <iostream>

int main()
{
	int x=123;		//x�� ��ü, x�� ���ڸ� ���� �� �ִ� ������ �޸𸮿� �����ϰ� �ִ�.

	int y = 10;		//initialization

	int z(7);		//
	x = 5; //assignment(���� ������)

	std::cout << x << std::endl;
	std::cout << &x << std::endl;
	return 0;
}