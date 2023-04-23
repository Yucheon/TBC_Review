//using문과 모호성
#include <iostream>

using namespace std;

namespace a
{
	int my_a=1;
}

namespace b
{
	int my_b = 2;
}

int main()
{
	using namespace a;
	using namespace b;

	cout << my_b << endl;
	cout << a::my_a << endl;

	return 0;
}