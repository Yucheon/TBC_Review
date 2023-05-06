//6.5 정적 다차원 배열
#include <iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_columns = 5;
	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
			cout << '[' << row << ']' << '[' << col << ']' << '\t';

		cout << endl;
	}

	cout << endl;

	int array[num_rows][num_columns] =		//row-major <-> column-major
	{
		{2,5,8,7,9},
		{54,87,3,6,4},
		{9,5,1,45,7}
	};
	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
		{
			cout << array[row][col] << '\t';

		}
		cout << endl;
	}
	
	return 0;
}