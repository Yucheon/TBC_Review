//6.11 �޸� ���� �Ҵ� new�� delete, Dynamic Memory Allocation
#include <iostream>

using namespace std;

int main()
{
	
	int* ptr = new int;		//int�� ���� �� �ִ� �޸��ּҸ� ������

	*ptr = 7;

	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;				//�޸𸮸� os�� ������
	return 0;
}