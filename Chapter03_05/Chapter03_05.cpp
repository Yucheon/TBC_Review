#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	cout << "your input values are : " << x << " " << y << endl;

	if (x == y)
	{
		cout << "equal" << endl;
	}
	if (x != y)
		cout << "not equal" << endl;
	if (x > y)
		cout << "X is greater than y" << endl;
	if (x < y)
		cout << "x is less than y " << endl;
	if (x >= y)
		cout << "x is greater than y or equal to y" << endl;
	if (x <= y)
		cout << "x is less than or equal to y" << endl;

	double d1(100 - 99.99); //0.001
	double d2(10 - 9.99);	//0.001
	if (d1 == d2)
	{
		cout << "equal" << endl;
	}
	else
	{
		cout << "Not equal" << endl;

		if (d1 > d2)cout << "d1>d2" << endl;			//d1이 더 크다고 나옴
		else
			cout << "d1<d2" << endl;
	}

	const double epsilon = 1e-10;

	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;
	cout << std::abs(d1 - d2) << endl;					//abs 절댓값을 출력
		return 0;
}