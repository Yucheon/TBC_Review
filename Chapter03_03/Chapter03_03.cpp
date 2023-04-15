#include <iostream>

int add(int a, int b)
{
	return (a + b);
}
int main()
{
	using namespace std;

	int x = 5;
	int y = ++x;

	cout << y << endl;	//6

	--y;

	cout << y << endl;	//5

	int a = 6, b = 6;

	cout << a << " " << b << endl;		// 6  6
	cout << a++ << " " << b-- << endl;	// 6  6  cout에 a를 보낸 후에 a에 1이 더해짐
	cout << a << " " << b << endl;		// 7  5


	int q = 1;
	int w = add(q, ++q);

	cout << "W의 값" << w << endl;		//3이 나와야할것 같지만 4가 나온다. 되도록 이렇게 사용하지 말것

	return 0;
}