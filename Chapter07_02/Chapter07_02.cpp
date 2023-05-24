//7.2 값에 의한 전달, 값이 복사된다.
//doSomething함수 안에서 어떤 짓을 해도 밖에는 영향을 주지 않는다.
#include <iostream>

using namespace std;

void doSomething(int y)
{
	cout << "In func" << y << " " << &y << endl;
}

int main()
{
	doSomething(5);

	int x = 6;

	cout << "In main" << x << " " << &x << endl;

	doSomething(x);		//x가 전달되는게 아니라 6이라는 값만 전달됨 , 값에 의한 전달
	doSomething(x+1);

	return 0;
}