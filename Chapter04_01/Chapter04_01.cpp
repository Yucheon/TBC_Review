//지역변수, 범위, 지속기간
#include <iostream>

using namespace std;

int main()
{
	int apple = 5;

	cout << apple << endl;
	{
		int apple = 1;			//이름은 같지만 8번 라인의 apple과는 다른 변수
		cout << apple << endl;
	}
	
	cout << apple << endl;

	return 0;
}
