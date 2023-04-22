#include <iostream>
#include "MyConstance.h"

extern int u=5;

void doSomething()
{
	using namespace std;

	//cout << "Hello" << endl;

	cout << "in test.cpp" << Constants::pi <<"  "<< & Constants::pi << endl;
}