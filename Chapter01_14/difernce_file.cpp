#include <iostream>

#define LIKE_BEOM		//있다면 범 출력 없다면 준 출력


void dosomethint()
{
	using namespace std;

#ifdef LIKE_BEOM
	cout << "i like beom" << endl;
#else
	cout << "i like Jun" << endl;
#endif 
	return;
}