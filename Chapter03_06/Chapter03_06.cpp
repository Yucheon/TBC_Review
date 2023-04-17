//논리 연산자
#include <iostream>
using namespace std;

int main()
{
	bool x = true;
	bool y = false;

	//logical AND
	cout << (x && y) << endl;		//둘다 ture일 때만 true가 나옴

	//logical OR ||
	cout << (x || y) << endl;

	int t = 9;

	if (t==1||t==0)
	{
		cout << "t is o or 0" << endl;
	}

	//short circuit evaluation
	int g = 9;
	int h = 2;

	if (g == 1 && h++ == 2)		
	{
		cout << "success" << endl;
	}

	cout << h << endl;				//g==1에서 false가 되어 연산을 수행하지 않아 h++가 수행되지 않았기 때문에 h가 2가 출력된다.


	if ((14 > 13 || 3 > 1) && (9 > 1))
	{
		cout << "성공" << endl;
	}


	return 0;


}