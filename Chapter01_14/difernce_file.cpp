#include <iostream>

#define LIKE_BEOM		//�ִٸ� �� ��� ���ٸ� �� ���


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