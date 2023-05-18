//6.17 C++11 For-each ¹Ýº¹¹®
#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
	int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	int max_number = std::numeric_limits<int>::lowest();

	for (const auto& n : fibonacci)
	max_number = std::max(max_number, n);

	cout << max_number << endl;

	//for (int& number : fibonacci)
	//	number = 10;

	//for (int number : fibonacci)
	//	cout << number << " ";

	return 0;
}