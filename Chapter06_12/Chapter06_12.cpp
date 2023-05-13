//6.12 동적 할당 배열
#include <iostream> 

using namespace std;

int main()
{
	int length = 5;

	cin >> length;					//int형 변수 length를 입력 받음

	int* array = new int[length];

	array[0] = 1;
	array[1] = 2;
	
	for (int i = 0; i < length; ++i)
	{
		cout << array[i] << endl;
		cout << &array[i] << endl;
	}
	//int array[length];
	return 0;
}