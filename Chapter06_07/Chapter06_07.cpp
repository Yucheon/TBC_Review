//6.7 포인터의 기본적인 사용법
#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
	int a, b, c, d;
};

int main()
{
	//int x = 5;
	//int* y = &x;
	//cout << x << endl;
	//cout << y << endl;

	int x = 5;
	double d = 1.0;

	int* ptr_x = &x;
	double* ptr_d = &d;

	cout << ptr_x << endl;		
	cout << *ptr_x << endl;		//5

	cout << ptr_d << endl;
	cout << *ptr_d << endl;		//1.0

	cout << typeid(ptr_x).name() << endl;
	cout << typeid(*ptr_x).name() << endl;

	Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ss) << endl;
	cout << sizeof(ptr_s) << endl;

	return 0;
} 