//7.3 ������ ���� �μ� ����
#include <iostream>

using namespace std;

void foo(const int& x)		//���� const�� ����ϴ� ���� , ���ͷ�������
{
	cout << x << endl;

}

void foo_1(int*& ptr)
{
	cout << ptr << " " << &ptr << endl;
}
void addOne(int& y)
{
	cout << y << " " << &y << endl;
	y = y + 1;
}

void getSinCos(const double degrees, double& sin_out, double& cos_out)//�Է��� �տ�(degrees), ����� �ڿ�
{																	  //�Է¿��� const�� ������
	static const double pi = 3.141592;

	double radians = degrees * pi / 180.0;		//������ ���� �����ʾ� �Լ� �ۿ����� ��ȭ����

	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}
int main()
{
	int x = 5;

	cout << x << " " << &x << endl;

	addOne(x);

	cout << x << " " << &x << endl;


	//foo(6);		//������ �Ķ���͸� �ް� �ֱ� ������ ���ͷ��� ���� �߻� �ذ����� ���� �κп��� const���
	return 0;
}