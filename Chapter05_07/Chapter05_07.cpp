//반복문 for
#include <iostream>

using namespace std;
int main()
{
	//for (int count=0; count <10;++count)//한 iteration
	//{
	//	cout << count << endl;
	//}
	int count = 0;

	for (; count <10;++count)//한 iteration
	{
		cout << count << endl;
	}

	for (int i = 9; i >= 0; --i)				//감소 순으로 적용
	{
		cout << i << endl;
	}

	for (int i=0, j=0;(i+j)<10;++i,j+=2)		//for안에 count가 두개
	{
		cout << i << " " << j << endl;
	}
	return 0;
}