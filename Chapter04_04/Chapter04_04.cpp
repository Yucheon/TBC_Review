//Auto 키워드와 자료형 추론
#include <iostream>

using namespace std;

int add(int x, int y)
{

	return x + y;
}

auto add1(int x, int y)	//함수의 시그니쳐에서도 auto 사용 가능
{
	return x + (double)y;	//double로 강제 형변환
}
int main()
{
	int a = 123;	//중복된 자료 가 있음 123은 int 변수 앞 int

	auto b = 122;//형 추론 auto
	auto c = 123.0;
	auto d = 1 + 2.0;
	auto result = add(1, 2);	//함수의 return 타입에 대해 auto를 사용할 수도 있다.
	return 0;
}