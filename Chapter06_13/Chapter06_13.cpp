//6.13 �����Ϳ� const, �����͵� const�� ����� �� �ִ�, ������ ���� �ٸ���.
#include <iostream>

using namespace std;

int main()
{
	int value = 5;

	const int* ptr = &value;
	//*ptr = 6;					//value���� �ٲ� �� ����. �������δ� ���� �ٲ� �� ���ٴ� ǥ���� �� ��Ȯ��
								//��, value�� ���� ������ �����ϴ�.

	value = 6;

	cout << *ptr << endl;

	int value2 = 7;
	ptr = &value2;

	int value_1 = 5;
	int* const ptr_1 = &value_1;

	int value_2 = 7;

	//ptr_1=&value_2;				//�����Ͱ� ����̹Ƿ� �ٲ� �� ����.

	//����
	int good = 10;

	const int* sum1 = &good;
	int* const sum2 = &good;		//�� ��İ�
	const int* const sum3 = &good;	//�� ����� ���� ���� ���ȴ�.
	//�Լ��� �Ķ���ͷν� �迭�� �Ѱ��� �� ���� �ٲ��� ���� �ּڰ��� �ٲ�°� ������ ���� �� �ַ� ���ȴ�.

	return 0;
}