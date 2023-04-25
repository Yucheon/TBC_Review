//4.7 열거형 enumerated types
#include <iostream>
#include <typeinfo>
#include <string>

enum Color			//새로운 사용자 정의형 타입 enum, 전역변수 처럼 작동함
{					//같은 숫자를 할당하면 문제가 될 수 있음
	COLOR_BLACK,	//cin으로 직접 받을 수 없음
	COLOR_RED=-15,
	COLOR_BLUE= 5,
	COLOR_GREEN=8,
	COLOR_pupple=5
};

//enum feeling	//서로 달라보이는 열거형의 값도 전역으로 작동하기 떄문에 위의 enum Color에 영향을 줌
//{				//컴파일이 되지 않음
//	COLOR_BLACK,
//	COLOR_RED,
//	COLOR_BLUE,
//	COLOR_GREEN
//};
int main()
{
	using namespace std;

	Color my_color = COLOR_BLACK;

	cout << "my_color  " << my_color << " + " << COLOR_BLACK << endl;	//my_color 0 + 0

	int color_id = COLOR_RED;

	cout << "int type color " << color_id << endl;						//3

	//Color my_int_color = color_id;									//불가능함

	Color my_int_color = static_cast<Color>(color_id);					//형변환 하면 가능

	cout << "my_int_color + " << my_int_color << endl;
	return 0;
}