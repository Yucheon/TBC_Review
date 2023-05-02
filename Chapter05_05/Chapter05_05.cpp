//반복문 while, break
#include <iostream>

using namespace std;

int main()
{
	int count = 0;	//몇번 사용했는지 세어줄 변수

	while (count<10)
	{
		cout << count << endl;
		++count;


		if (count == 10)break; 
	}
	return 0;
}