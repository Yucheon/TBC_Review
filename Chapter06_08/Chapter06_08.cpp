//6.7a 널 포인터 Null Pointer
#include <iostream>

void doSomething()
{

}
using namespace std;

int main()
{
	double* ptr{ nullptr };

	if (ptr != nullptr)
	{
		//dow sonething useful
	}
	else
		cout<<"null"<<endl;

	return 0;
}t