//Auto Ű����� �ڷ��� �߷�
#include <iostream>

using namespace std;

int add(int x, int y)
{

	return x + y;
}

auto add1(int x, int y)	//�Լ��� �ñ״��Ŀ����� auto ��� ����
{
	return x + (double)y;	//double�� ���� ����ȯ
}
int main()
{
	int a = 123;	//�ߺ��� �ڷ� �� ���� 123�� int ���� �� int

	auto b = 122;//�� �߷� auto
	auto c = 123.0;
	auto d = 1 + 2.0;
	auto result = add(1, 2);	//�Լ��� return Ÿ�Կ� ���� auto�� ����� ���� �ִ�.
	return 0;
}