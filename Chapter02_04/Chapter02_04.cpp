#include <iostream>

using namespace std;

void my_function()
{


}

int main()
{
	//void my_my_void;	void�� �޸𸮸� �������� �ʱ� ������ �̷��� ����� �� ����.

	int i = 123;
	float f = 123.456f;

	void* my_void;

	my_void = (void*)&i;	//������ ������ �ּ�, void*�� ĳ������
	my_void = (void*)&f;	//�Ǽ��� ������ �ּ�

	return 0;
}