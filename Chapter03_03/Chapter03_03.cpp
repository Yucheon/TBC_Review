#include <iostream>

int add(int a, int b)
{
	return (a + b);
}
int main()
{
	using namespace std;

	int x = 5;
	int y = ++x;

	cout << y << endl;	//6

	--y;

	cout << y << endl;	//5

	int a = 6, b = 6;

	cout << a << " " << b << endl;		// 6  6
	cout << a++ << " " << b-- << endl;	// 6  6  cout�� a�� ���� �Ŀ� a�� 1�� ������
	cout << a << " " << b << endl;		// 7  5


	int q = 1;
	int w = add(q, ++q);

	cout << "W�� ��" << w << endl;		//3�� ���;��Ұ� ������ 4�� ���´�. �ǵ��� �̷��� ������� ����

	return 0;
}