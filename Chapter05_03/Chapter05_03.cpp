//switch-case
#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColrName(Colors color)
{
	//switch (color)
	//{
	//case Colors::BLACK:
	//	cout << "black" << endl;
	//	break;
	//case Colors::WHITE:
	//	cout << "white" << endl;
	//	break;
	//case Colors::RED:
	//	cout << "red" << endl;
	//	break;
	//case Colors::GREEN:
	//	cout << "green" << endl;
	//	break;
	//case Colors::BLUE:
	//	cout << "blue" << endl;
	//	break;
	//default:
	//	cout << "none" << endl;
	//	break;
	//}

	switch (static_cast<int>(color))
	{
	case 0:
		cout << "black" << endl;
		break;							//break 가 없으면 아래의 case도 모두 실행된다.
	case 1:
		cout << "white" << endl;
		break;
	case 2:
		cout << "red" << endl;
		break;
	case 3:
		cout << "green" << endl;
		break;
	case 4:
		cout << "blue" << endl;
		break;
	default:
		cout << "none" << endl;
		break;
	}

}

int main()
{


	printColrName(Colors::RED);

	//int x;
	//cin >> x;

	//switch (x)
	//{
	//case 0:
	//	cout << "Zero";
	//	break;
	//case 1:
	//	cout << "One";
	//	break;
	//case 2:
	//	cout << "Two";
	//	break;
	//}

	cout << endl;
	return 0;
}