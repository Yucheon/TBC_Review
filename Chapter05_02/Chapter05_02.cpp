//조건문 if
#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;

	if (x > 10)
	{
		cout << x << "is greater than 10 " << endl;
	}

	else
	cout << x << "not is greater than 10" << endl;
	cout << "Test 1" << endl;						//블럭이 없으면 절대 같이 실행되지 않음


	int a, b;
	cin >> a >> b;

	if (a > 0 && b > 0)
		cout << "both number are positive" << endl;
	else if (a > 0 || b > 0)
		cout << "one of the number is positive" << endl;
	else
		cout << "Neither number is positive" << endl;
	//※ 주의 사항
	//if(x=0), x의 값에 0을 대입하게 되므로 이후의 x변수가 전부 0이 출력됨
	//if문 안에서 {}안에 초기화 된 값은 그 안에서만 사용될 수 있다.

	return 0;
}