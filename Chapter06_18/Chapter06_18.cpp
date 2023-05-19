//6.18 보이드 포인터, 제네릭 포인터 = 포괄적이다. generic pointer
#include <iostream>

using namespace std;

int main()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;
	ptr = &c;

	int* ptr_i = &i;

	
	return 0;
}