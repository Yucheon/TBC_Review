//6.9 ������ ����� �迭 �ε���, ������ ������ �迭���� ���ȴ� �迭�� �� �������̴�.
#include <iostream>

using namespace std;

int main()
{
	int value = 7;
	int* ptr = &value;
	cout << uintptr_t(ptr+1) << endl;		//4����Ʈ�� ���� double�϶��� 8����Ʈ�� ����
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr-1) << endl;

	char name[] = "Jack Jack";

	const int n_name = sizeof(name) / sizeof(char);
	while (true)
	{
		for (int i=0;i< n_name;++i)
		{
			if (name[i]!=NULL)
			{
				cout << name[i] << endl;
			}
			else
			{
				cout << "�ΰ���" << '\n';
				break;
			}
		}
		break;

	}
	return 0;
}