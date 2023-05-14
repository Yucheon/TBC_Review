//6.13 포인터와 const, 포인터도 const를 사용할 수 있다, 하지만 조금 다르다.
#include <iostream>

using namespace std;

int main()
{
	int value = 5;

	const int* ptr = &value;
	//*ptr = 6;					//value값을 바꿀 수 없다. 역참조로는 값을 바꿀 수 없다는 표현이 더 정확함
								//단, value로 직접 변경은 가능하다.

	value = 6;

	cout << *ptr << endl;

	int value2 = 7;
	ptr = &value2;

	int value_1 = 5;
	int* const ptr_1 = &value_1;

	int value_2 = 7;

	//ptr_1=&value_2;				//포인터가 상수이므로 바꿀 수 없다.

	//정리
	int good = 10;

	const int* sum1 = &good;
	int* const sum2 = &good;		//이 방식과
	const int* const sum3 = &good;	//이 방식이 가장 자주 사용된다.
	//함수의 파라미터로써 배열을 넘겨줄 때 값을 바꾸지 말고 주솟값도 바뀌는걸 원하지 않을 때 주로 사용된다.

	return 0;
}