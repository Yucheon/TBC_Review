#include <iostream>
#include <array>

using namespace std;

int& get(std::array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}

struct S {
	int a, b, c, d;
};

S getStruct() 
{
	S my_s{ 1,2,3,4 };

	return my_s;
}

int main()
{
	std::array<int, 100> my_array;
	my_array[30] = 10;

	get(my_array, 30) = 1024;

	cout << my_array[30] << endl;

	S my_s=	getStruct();

	cout << my_s.d << endl;

	return 0;
}