//���� ���� ������ (������ Ŭ����)
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
	////enum���� ���������� int 0�� �Ǳ� ������ color�� red�� fruit�� banana�� ���ٰ� ���´�.
	////�̴� �츮�� ���ϴ� ���� �ƴ�
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

	if (static_cast<int>(color) == static_cast<int>(fruit))					//color == fruit�� ���� ����
	{				
		cout << "Color is fruit ? " << endl;
	}

	return 0;
}