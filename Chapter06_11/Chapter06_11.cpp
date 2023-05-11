//6.11 메모리 동적 할당 new와 delete, Dynamic Memory Allocation
#include <iostream>

using namespace std;

int main()
{
	
	int* ptr = new int;		//int를 담을 수 있는 메모리주소를 가져옴

	*ptr = 7;

	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;				//메모리를 os에 돌려줌
	return 0;
}