//���ǹ� if
#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;

	if (x > 10)
	{
		cout << x << "is greater than 10 " << endl;
	}

	else
	cout << x << "not is greater than 10" << endl;
	cout << "Test 1" << endl;						//���� ������ ���� ���� ������� ����


	int a, b;
	cin >> a >> b;

	if (a > 0 && b > 0)
		cout << "both number are positive" << endl;
	else if (a > 0 || b > 0)
		cout << "one of the number is positive" << endl;
	else
		cout << "Neither number is positive" << endl;
	//�� ���� ����
	//if(x=0), x�� ���� 0�� �����ϰ� �ǹǷ� ������ x������ ���� 0�� ��µ�
	//if�� �ȿ��� {}�ȿ� �ʱ�ȭ �� ���� �� �ȿ����� ���� �� �ִ�.

	return 0;
}