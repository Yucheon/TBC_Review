//7.4 주소에 의한 인수 전달
#include <iostream>

using namespace std;

void foo(int* ptr)
{
	cout << "디레퍼런싱값 : "<< * ptr<<" 포인터의 값: " << ptr << " 포인터의 주소의 값" << &ptr << endl;
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