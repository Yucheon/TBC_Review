//7.7 �Լ� �����ε�, ����Ÿ�Ը� �ٸ� ����  �����ε��� ���� ����, �Ű����������� �޶����
#include <iostream>
#include <string>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

int main()
{

	add(1, 2);				//�ٸ� �Լ� ���
	add(3.2f, 48.5f);		//�ٸ� �Լ� ���, � �Լ��� ������� ������ �� ����


	return 0;
}