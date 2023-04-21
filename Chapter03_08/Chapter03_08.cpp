//비트단위 연산자(bitwise operators), 계산 속도가 훨씬 빠르고 메모리를 꽉꽉채워서 사용함
//bitwise연산자는 usinged를 이용하는것이 일반적이다. 비트마스크에서 주로 사용하며 속도에서 필수이다.

#include <iostream>
#include <bitset>		//이진수로 바꿔서 출력해주는 라이브러리

using namespace std;

int main()
{
	//비트단위연산자
	// << left shift, 오퍼레이터 오버로딩으로 cout의 <<과 다른 의미로 사용된다.
	// >>
	// ~, &, |, ^

	unsigned int a = 3;
	
	cout << std::bitset<4>(a) << endl;		//0011

	unsigned int b = a << 1;

	cout << std::bitset<4>(b) << endl;		//0110

	//unsinged int에서 제곱단위로 값이 커질 떄 *연산자를 사용하는 것 보다 left shift연산자를 사용하는 것이 훨씬 빠르다.

	cout << std::bitset<16>(~a) << " " << (~a) << endl;

	unsigned int x = 0b1100;
	unsigned int y = 0b0110;

	cout << std::bitset<4>(x & y) << endl;		//0100
	cout << std::bitset<4>(x | y) << endl;		//1110
	cout << std::bitset<4>(x ^ y) << endl;		//1010

	return 0;
}