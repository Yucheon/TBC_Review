//산술 연산자
#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = -(-x);

	cout << y << endl;

	int a = 7;
	int b = 4;
		
	cout << a / b << endl;					//둘중 하나만 실수여도 결과값이 실수로 나온다.
	cout << float(a)/b<<endl;		
	cout << a/ float(b)<<endl;
	cout << float(a)/ float(b) <<endl;
	

	return 0;
}