//6.10 C언어 스타일의 문자열 심볼릭 상수
#include <iostream>

using namespace std;

int main()
{
	char name[] = "Jack Jack";

	//char* name = "Jack Jack";	//Jack Jack은 리터럴이기 때문에 불가능,포인터는 메모리의 주소를 가리키기만 한다.
								//단, 아래와 같이 리터럴을 기호적인 상수로 표현하는 것은 가능하다.
	const char* name = "Jack Jack";


	cout << name << endl;

	return 0;
}