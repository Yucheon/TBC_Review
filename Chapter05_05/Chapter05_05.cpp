//�ݺ��� while, break
#include <iostream>

using namespace std;

int main()
{
	int count = 0;	//��� ����ߴ��� ������ ����

	while (count<10)
	{
		cout << count << endl;
		++count;


		if (count == 10)break; 
	}
	return 0;
}