//�� ������
#include <iostream>
using namespace std;

int main()
{
	bool x = true;
	bool y = false;

	//logical AND
	cout << (x && y) << endl;		//�Ѵ� ture�� ���� true�� ����

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

	cout << h << endl;				//g==1���� false�� �Ǿ� ������ �������� �ʾ� h++�� ������� �ʾұ� ������ h�� 2�� ��µȴ�.


	if ((14 > 13 || 3 > 1) && (9 > 1))
	{
		cout << "����" << endl;
	}


	return 0;


}