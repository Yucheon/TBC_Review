//��������, ����, ���ӱⰣ
#include <iostream>

using namespace std;

int main()
{
	int apple = 5;

	cout << apple << endl;
	{
		int apple = 1;			//�̸��� ������ 8�� ������ apple���� �ٸ� ����
		cout << apple << endl;
	}
	
	cout << apple << endl;

	return 0;
}
