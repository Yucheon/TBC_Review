//�Ͻ��� ����ȯ�� ����� ����ȯ
#include <iostream> 
#include <typeinfo>

using namespace std;

int main()
{
	// numeric promotion , ������ ���� ���� ������ �� ū ������ ����.
	float a = 123.0;
	double d = a; 

	cout << typeid(a).name() << endl;		//typeid().name() ���� ������� �����Ͱ� � Ÿ������ ��ȯ

	//numeric conversion
	int i = 30000;
	char c = i;

	int i = int(4.0);	//cpp��Ÿ��
	int o = (int)4.0;	//c��Ÿ��
	int p = static_cast < int>(4.0);
	cout << static_cast<int>(c) << endl;	//48
	return 0;
}