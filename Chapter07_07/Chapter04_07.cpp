//4.7 ������ enumerated types
#include <iostream>
#include <typeinfo>
#include <string>

enum Color			//���ο� ����� ������ Ÿ�� enum, �������� ó�� �۵���
{					//���� ���ڸ� �Ҵ��ϸ� ������ �� �� ����
	COLOR_BLACK,	//cin���� ���� ���� �� ����
	COLOR_RED=-15,
	COLOR_BLUE= 5,
	COLOR_GREEN=8,
	COLOR_pupple=5
};

//enum feeling	//���� �޶��̴� �������� ���� �������� �۵��ϱ� ������ ���� enum Color�� ������ ��
//{				//�������� ���� ����
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

	//Color my_int_color = color_id;									//�Ұ�����

	Color my_int_color = static_cast<Color>(color_id);					//����ȯ �ϸ� ����

	cout << "my_int_color + " << my_int_color << endl;
	return 0;
}