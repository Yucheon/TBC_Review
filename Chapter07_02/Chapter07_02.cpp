//7.2 ���� ���� ����, ���� ����ȴ�.
//doSomething�Լ� �ȿ��� � ���� �ص� �ۿ��� ������ ���� �ʴ´�.
#include <iostream>

using namespace std;

void doSomething(int y)
{
	cout << "In func" << y << " " << &y << endl;
}

int main()
{
	doSomething(5);

	int x = 6;

	cout << "In main" << x << " " << &x << endl;

	doSomething(x);		//x�� ���޵Ǵ°� �ƴ϶� 6�̶�� ���� ���޵� , ���� ���� ����
	doSomething(x+1);

	return 0;
}