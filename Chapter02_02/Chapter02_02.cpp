#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
// char  -> 1바이트
//short  -> 2byte
// int   -> 2byte, 대부분 4byte
int main()
{
	short s = 1;				//2 byte = 2*8bits = 16bit , 2^16 가짓수 표현 가능
	int i = 1;					//4 byte = 4*8bits = 32bit , 2^32 가짓수 표현 가능
	long l = 1;					//4 byte = 4*8bits = 32bit , 2^32 가짓수 표현 가능
	long long ll = 1;			//8 byte = 8*8bits = 64bit , 2^64 가짓수 표현 가능

	cout << sizeof(s) << endl;	//2
	cout << sizeof(i) << endl;	//4
	cout << sizeof(l) << endl;	//4
	cout << sizeof(ll) << endl;	//8

	cout << std::pow(2, sizeof(short) * 8) << endl;			//65536
	cout << std::pow(2, sizeof(short) * 8 - 1)-1 << endl;	//32767(표현할 수 있는 가장 큰 숫자)부호를 표현하기 위해 맨 앞자리를 사용하기 때문에 '-1', 0도 표현하기 때문에 '-1'
	cout << std::numeric_limits<short>::max() << endl;		//32767(32768에서 0을 저장해야하므로 1만큼 적은 32767)
	cout << std::numeric_limits<short>::min() << endl;		//-32768(표현할 수 있는 가장 작은 숫자)
	cout << std::numeric_limits<short>::lowest() << endl;	//-32768(부동소수점 강의에서 다시 소개)
	
	s = 32767;
	s += 1;

	cout <<"s의 값은"<< s << endl;							//overflow

	return 0;
}