//6.20 std::array ¼Ò°³
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	int array[5] = { 1,2,3,4,5 };

	std::array<int, 5>my_arr = { 221,12,3,14,65 };

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	std::sort(my_arr.rbegin(), my_arr.rend());
	return 0;
}