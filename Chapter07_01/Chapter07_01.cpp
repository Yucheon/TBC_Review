//7.1 �Ű������� �������� ����
#include <iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y)	//x�� y�� �Ű�����
{
	return x + y;
}

int main()
{
	int x = 1, y = 2;

	foo(6, 7);		//�̶� 6��7�� arguments ������
	foo(x, y + 1);	//1�� 3�̶�� ���� argument

	return 0;
}