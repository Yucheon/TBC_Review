//6.14 참조 변수 reference variable
#include <iostream>

using namespace std;

void doSomething(int &n)		//레퍼런스를 사용하여 변수 자체가 넘어감
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

	int& ref = value;		//내부적으로 ref가 value와 같은 메모리를 사용하는 것 처럼 작동함
							//레퍼런스는 반드시 초기화가 되어야 한다.

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