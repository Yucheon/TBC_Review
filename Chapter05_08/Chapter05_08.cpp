//break, continue
#include <iostream>

using namespace std;

void brakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
		break;			//whiel문 밖으로만 나감, Hello가 출력됨

		if (ch == 'r')
		return;			//함수 밖으로 아예 나감, Hello가 출력되지 않음
	}

	cout << "Hello" << endl;
}

int main()
{
	//brakOrReturn();

	for (int i=0;i<10;++i)		//홀수만 출력하게 만들고자 할 떄
	{
		//if (i%2==1)
		//{
		//	cout << i << endl;
		//}

		if (i % 2 == 0)continue;//continue는 실행되면 아래를 건너뛰고 ++i로 넘어간다.
		cout << i << endl;
	}

	int count(0);

	//bool escape_flag = false;
	//while (!escape_flag)
	//{
	//	char ch;
	//	cin >> ch;
	//	cout << ch << " " << count++ << endl;
	//	if (ch == 'x')
	//		escape_flag = true;
	//}

	bool escape_flag = false;
	while (true)
	{
		char ch;
		cin >> ch;
		cout << ch << " " << count++ << endl;
		if (ch == 'x')
			break;
	}
	return 0;
}