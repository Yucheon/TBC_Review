//6.10 C��� ��Ÿ���� ���ڿ� �ɺ��� ���
#include <iostream>

using namespace std;

int main()
{
	char name[] = "Jack Jack";

	//char* name = "Jack Jack";	//Jack Jack�� ���ͷ��̱� ������ �Ұ���,�����ʹ� �޸��� �ּҸ� ����Ű�⸸ �Ѵ�.
								//��, �Ʒ��� ���� ���ͷ��� ��ȣ���� ����� ǥ���ϴ� ���� �����ϴ�.
	const char* name = "Jack Jack";


	cout << name << endl;

	return 0;
}