//��� ������
#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = -(-x);

	cout << y << endl;

	int a = 7;
	int b = 4;
		
	cout << a / b << endl;					//���� �ϳ��� �Ǽ����� ������� �Ǽ��� ���´�.
	cout << float(a)/b<<endl;		
	cout << a/ float(b)<<endl;
	cout << float(a)/ float(b) <<endl;
	

	return 0;
}