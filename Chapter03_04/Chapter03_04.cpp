#include <iostream>

using namespace std;

int main()
{
	//������ ���� ũ��� �˰��� �� ��
	float a;
	sizeof(float);	//4, Ŭ������ ����ü ���� ��� ����
	sizeof a;		//4


	//comma operator

	int x = 3;
	int y = 10;
	int z = (++x, ++y);			//���� ���ڸ� ����ϰ� ���� ���� z������ ��

	cout << x << " " << y << " " << z << endl;

	++x;
	++y;
	z = y;

	cout << x << " " << y << " " << z << endl;

	int c = 1, d = 10;			//�޸������ڰ� �ƴ� �����ϱ� ���� ��ȣ
	int t;


	//conditional operator


	return 0;
}