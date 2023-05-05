//6.4 배열과 선택 정렬 selection sort
#include <iostream>

using namespace std;

void printarray(int array[],const int length)
{
	for (int index = 0; index < length; ++index)
		cout << array[index] << " ";
	cout << endl;

}
int main()
{
	const int length = 5;

	int array[length] = { 3,5,2,1,4 };

	printarray(array, length);

	for (int i=0;i<length;++i)
	{
		for (int j = i; j < length; ++j)
		{
			if (array[i] > array[j])
			{
				int x = array[i];
				array[i] = array[j];
				array[j] = x;
			}
		}
	}
	printarray(array, length);
	return 0;
}