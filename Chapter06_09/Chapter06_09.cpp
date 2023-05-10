//6.9 포인터 연산과 배열 인덱싱, 포인터 연산이 배열에서 사용된다 배열이 곧 포인터이다.
#include <iostream>

using namespace std;

int main()
{
	int value = 7;
	int* ptr = &value;
	cout << uintptr_t(ptr+1) << endl;		//4바이트씩 감소 double일때는 8바이트씩 감소
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
				cout << "널감지" << '\n';
				break;
			}
		}
		break;

	}
	return 0;
}