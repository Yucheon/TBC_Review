//6.19 다중 포인터와 동적 다차원 배열
#include <iostream>

using namespace std;

int main()
{

	//int* ptr = nullptr;
	//int** ptrptr = nullptr;

	//int value = 5;

	//ptr = &value;
	//ptrptr = &ptr;

	//cout << ptr << " " << *ptr << " " << &ptr << endl;
	//cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
	//cout << **ptrptr << endl;

	const int row = 3;
	const int col = 5;

	const int s2da[][5] =
	{
		{1,2,3,4,5},			//1차원 배열이 3개
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	int** matric = new int* [row];

	for (int r = 0; r < row; ++r)
		matric[r] = new int[col];

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			matric[r][c] = s2da[r][c];
		}
	}

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			cout << matric[r][c] << " ";
			cout << endl;
		}
	}

	return 0;
}