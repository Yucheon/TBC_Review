#include <iostream>

using namespace std;

int main()
{
	//데이터 형의 크기롤 알고자 할 때
	float a;
	sizeof(float);	//4, 클래스와 구조체 역시 사용 가능
	sizeof a;		//4


	//comma operator

	int x = 3;
	int y = 10;
	int z = (++x, ++y);			//앞의 인자를 계산하고 뒤의 값이 z안으로 들어감

	cout << x << " " << y << " " << z << endl;

	++x;
	++y;
	z = y;

	cout << x << " " << y << " " << z << endl;

	int c = 1, d = 10;			//콤마연산자가 아닌 구분하기 위한 기호
	int t;


	//conditional operator


	return 0;
}