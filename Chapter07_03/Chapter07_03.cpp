//7.3 참조에 의한 인수 전달
#include <iostream>

using namespace std;

void foo(const int& x)		//굳이 const를 사용하는 이유 , 리터럴때문에
{
	cout << x << endl;

}

void foo_1(int*& ptr)
{
	cout << ptr << " " << &ptr << endl;
}
void addOne(int& y)
{
	cout << y << " " << &y << endl;
	y = y + 1;
}

void getSinCos(const double degrees, double& sin_out, double& cos_out)//입력이 앞에(degrees), 출력이 뒤에
{																	  //입력에는 const를 붙이자
	static const double pi = 3.141592;

	double radians = degrees * pi / 180.0;		//참조로 값을 받지않아 함수 밖에서는 변화없음

	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}
int main()
{
	int x = 5;

	cout << x << " " << &x << endl;

	addOne(x);

	cout << x << " " << &x << endl;


	//foo(6);		//참조로 파라미터를 받고 있기 때문에 리터럴은 오류 발생 해결방법은 정의 부분에서 const사용
	return 0;
}