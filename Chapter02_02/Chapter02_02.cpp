#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
// char  -> 1����Ʈ
//short  -> 2byte
// int   -> 2byte, ��κ� 4byte
int main()
{
	short s = 1;				//2 byte = 2*8bits = 16bit , 2^16 ������ ǥ�� ����
	int i = 1;					//4 byte = 4*8bits = 32bit , 2^32 ������ ǥ�� ����
	long l = 1;					//4 byte = 4*8bits = 32bit , 2^32 ������ ǥ�� ����
	long long ll = 1;			//8 byte = 8*8bits = 64bit , 2^64 ������ ǥ�� ����

	cout << sizeof(s) << endl;	//2
	cout << sizeof(i) << endl;	//4
	cout << sizeof(l) << endl;	//4
	cout << sizeof(ll) << endl;	//8

	cout << std::pow(2, sizeof(short) * 8) << endl;			//65536
	cout << std::pow(2, sizeof(short) * 8 - 1)-1 << endl;	//32767(ǥ���� �� �ִ� ���� ū ����)��ȣ�� ǥ���ϱ� ���� �� ���ڸ��� ����ϱ� ������ '-1', 0�� ǥ���ϱ� ������ '-1'
	cout << std::numeric_limits<short>::max() << endl;		//32767(32768���� 0�� �����ؾ��ϹǷ� 1��ŭ ���� 32767)
	cout << std::numeric_limits<short>::min() << endl;		//-32768(ǥ���� �� �ִ� ���� ���� ����)
	cout << std::numeric_limits<short>::lowest() << endl;	//-32768(�ε��Ҽ��� ���ǿ��� �ٽ� �Ұ�)
	
	s = 32767;
	s += 1;

	cout <<"s�� ����"<< s << endl;							//overflow

	return 0;
}