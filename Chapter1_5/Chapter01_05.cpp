#include <iostream>

using namespace std;

int MultiplyTwoNumbers(int mum_a, int num_b)//�Լ��� �̸��� ������ �ڼ���
{											//mum_a �Ű�����, �Ķ���� �Լ��� �ݵǾ� ���� �� int num_a�� �ʱ�ȭ �� �� �μ��� �޴´�.
	int sum = mum_a * num_b;				//sum�� �ʱ�ȭ �ǰ� ����� ���� ����

	return sum;
}

int main()
{												//����� ����Ʈ ��� �Լ������� ������ �� �� F11�� ��� (step into)
	cout<< MultiplyTwoNumbers(1,2) <<endl;		//�Լ��� ���� �� ���Ǵ� 1�� 2�� �μ� argument
	cout<< MultiplyTwoNumbers(3,4) <<endl;
	cout<<8+13 <<endl;

	return 0;
}