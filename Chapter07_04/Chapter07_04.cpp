//7.4 �ּҿ� ���� �μ� ����
#include <iostream>

using namespace std;

void foo(int* ptr)
{
	cout << "���۷��̰� : "<< * ptr<<" �������� ��: " << ptr << " �������� �ּ��� ��" << &ptr << endl;
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int* ptr = &value;

	cout << &ptr << endl;

	foo(ptr);
	foo(&value);

	return 0;
}