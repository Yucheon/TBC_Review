#include <iostream>

using namespace std;

void printNumber(int my_number)	//�Ķ���� ��ü�� �ٲٴ� ���� �ſ� �幰��.
{
	my_number = 456;			//�̷��� �Ķ������ ���� �Լ� �ȿ��� �ٲٴ� ��� �Լ��� ������� �����ֱⰡ ���� �ʱ� ������ ���� ������ �ʴ´�.
	cout<<my_number << endl;
}

void Re_printNumber(const int my_number)	//�Ķ���� ��ü�� �ٲٴ� ���� �ſ� �幰��.
{
	int n = 456;			//�̷��� �Ķ������ ���� �Լ� �ȿ��� �ٲٴ� ��� �Լ��� ������� �����ֱⰡ ���� �ʱ� ������ ���� ������ �ʴ´�.
	cout << n << endl;
}

int main()
{
	printNumber(123);

	const double gravity{ 9.8 };	//const�� �ʱ�ȭ�� �ݵ�� ���־�� �Ѵ�.

	//gravity = 1.2;

	return 0;
}