#include <iostream>

int main()
{
	using namespace std;

	bool b1 = true;
	bool b2(false);
	bool b3{ true };
	b3 = false;

	cout << std::boolalpha;		//bool�� ������ flase, true�� ��½�Ŵ
	cout << b3 << endl;
	cout << b1 << endl;

	cout << !b3 << endl;

	cout << (true && true) << endl;
	cout << (false && true) << endl;
	cout << (true && false) << endl;
	cout << (false && false) << endl;


	bool b;

	cin >> b;
	cout << std::boolalpha;
	cout << "Your input : " << b << endl;
	return 0;
}