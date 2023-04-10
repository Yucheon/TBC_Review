#include <iostream>

using namespace std;

void my_function()
{


}

int main()
{
	//void my_my_void;	void는 메모리를 차지하지 않기 때문에 이렇게 사용할 수 없다.

	int i = 123;
	float f = 123.456f;

	void* my_void;

	my_void = (void*)&i;	//정수형 변수의 주소, void*로 캐스팅함
	my_void = (void*)&f;	//실수형 변수의 주소

	return 0;
}