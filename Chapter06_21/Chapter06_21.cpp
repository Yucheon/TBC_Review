//6.21 std::vector ¼Ò°³
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	std::vector<int>array = { 1,2,34,5 };

	int* my_arr = new int[5];

	for (auto& itr : array)
		cout << itr << " ";
	cout << endl;

	cout << array[1] << endl;
	cout << array.size() << endl;
	cout << array.at(1) << endl;
	return 0;
}