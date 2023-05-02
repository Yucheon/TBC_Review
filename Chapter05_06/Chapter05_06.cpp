//반복문 do-while, 일단 하고나서 조건을 살핌
#include <iostream>

using namespace std;

int main()
{
	int selection;
	do
	{
		cout << "1.add" << endl;
		cout << "2.sub" << endl;
		cout << "3.mult" << endl;
		cout << "4.div" << endl;
		cin >> selection;
	} while (selection < 0 || selection >= 5);

	cout << "You selectied" << selection << endl;

	return 0;
}