//break, continue
#include <iostream>

using namespace std;

void brakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
		break;			//whiel�� �����θ� ����, Hello�� ��µ�

		if (ch == 'r')
		return;			//�Լ� ������ �ƿ� ����, Hello�� ��µ��� ����
	}

	cout << "Hello" << endl;
}

int main()
{
	//brakOrReturn();

	for (int i=0;i<10;++i)		//Ȧ���� ����ϰ� ������� �� ��
	{
		//if (i%2==1)
		//{
		//	cout << i << endl;
		//}

		if (i % 2 == 0)continue;//continue�� ����Ǹ� �Ʒ��� �ǳʶٰ� ++i�� �Ѿ��.
		cout << i << endl;
	}

	int count(0);

	//bool escape_flag = false;
	//while (!escape_flag)
	//{
	//	char ch;
	//	cin >> ch;
	//	cout << ch << " " << count++ << endl;
	//	if (ch == 'x')
	//		escape_flag = true;
	//}

	bool escape_flag = false;
	while (true)
	{
		char ch;
		cin >> ch;
		cout << ch << " " << count++ << endl;
		if (ch == 'x')
			break;
	}
	return 0;
}