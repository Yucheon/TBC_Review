//영역 제한 열거형 (열거형 클래스)
#include <iostream>

int main()
{
	//using namespace std;

	//enum Color
	//{
	//	RED,
	//	BLUE
	//};

	//enum Fruit
	//{
	//	BANANA,
	//	APPLE
	//};
	////enum에서 내부적으로 int 0이 되기 떄문에 color의 red와 fruit의 banana가 같다고 나온다.
	////이는 우리가 원하는 것이 아님
	//Color color = RED;			//0
	//Fruit fruit = BANANA;		//0

	//if (color == fruit)
	//{
	//	cout << "Color is fruit ? " << endl;
	//}

	using namespace std;

	enum class Color
	{
		RED,
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		APPLE
	};

	Color color = Color::RED;			//0
	Fruit fruit = Fruit::BANANA;		//0

	if (static_cast<int>(color) == static_cast<int>(fruit))					//color == fruit가 되지 않음
	{				
		cout << "Color is fruit ? " << endl;
	}

	return 0;
}