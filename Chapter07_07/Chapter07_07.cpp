//7.7 함수 오버로딩, 리턴타입만 다른 경우는  오버로딩이 되지 않음, 매개변수까지도 달라야함
#include <iostream>
#include <string>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

int main()
{

	add(1, 2);				//다른 함수 사용
	add(3.2f, 48.5f);		//다른 함수 사용, 어떤 함수를 사용할지 컴파일 시 결정


	return 0;
}