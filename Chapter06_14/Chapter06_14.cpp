//6.14 ���� ���� reference variable
#include <iostream>

using namespace std;

void doSomething(int &n)		//���۷����� ����Ͽ� ���� ��ü�� �Ѿ
{
	cout << &n << endl;
	n = 10;
	cout << "in do Something"<<n << endl;
}

int main()
{
	int value = 5;

	int* ptr = nullptr;
	ptr = &value;

	int& ref = value;		//���������� ref�� value�� ���� �޸𸮸� ����ϴ� �� ó�� �۵���
							//���۷����� �ݵ�� �ʱ�ȭ�� �Ǿ�� �Ѵ�.

	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl;

	int n = 5;
	cout << n << endl;

	doSomething(n);

	cout << n << endl;

	return 0;
}