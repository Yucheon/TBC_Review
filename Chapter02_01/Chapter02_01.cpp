#include <iostream>
//char�� 1����Ʈ, int�� 4����Ʈ
//char�� ���������� ���� �� ����Ǳ� ������ integerŸ���̱⵵ �ϴ�
using namespace std;

int main()
{
	bool bValue = false;

	//cout << ((bValue) ? 1 : 0) << endl;


	char chValue = 'A';
	char AValue = 65;
	float fValue = 3.141592f;		//f�� ������ ������ double�� �ν��Ѵ�.
	double dValue = 3.141592;		// ���̽��� �⺻������ double�� ���
	string f = "nani";
	
	//�ʱ�ȭ ��� 3����
	int a(345);						//direct  initialization
	int b = 123;					//copy    initialization	���� 3.14���� �Ǽ��� ������ warning�� �߸鼭 ������ �ս��� �Ͼ��. ������ casting���ش�.
	int c{ 123 };					//uniform initialization	�� �� ������

	//�����ʱ�ȭ, �������� �������Ƿ� ����õ
	int k, l, m;					//���� ����
	int t = 2, f(31), u{ 496 };		//����

	auto aValue = 3.141592;			//�����Ͻ� ���� ������ ����


	cout << chValue << endl;		//A
	cout << (int)chValue << endl;	//65

	cout << AValue << endl;			//A
	cout << (int)AValue << endl;	//65

	cout << fValue << endl;			//3.14159	cout���� ����� �� �ڸ����� ���߾� �ֱ� ���� ������µ��� ����, �������� �Ǽ��� ǥ���ϴ� ������ �ٲ㼭 ����
	cout << dValue << endl;			//3.14159
		
	cout << sizeof(bool) << endl;	//sizeof�Լ��� ���� ������ ������ �Ѵ� �۵�
	cout << sizeof(bValue) << endl;

	cout << sizeof(AValue) << endl;	//1
	cout << sizeof(fValue) << endl;	//4
	cout << sizeof(dValue) << endl;	//8
	cout << sizeof(a) << endl;		//4	
	cout << sizeof(f) << endl;		//32

	return 0;
} 