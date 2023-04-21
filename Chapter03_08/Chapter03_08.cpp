//��Ʈ���� ������(bitwise operators), ��� �ӵ��� �ξ� ������ �޸𸮸� �˲�ä���� �����
//bitwise�����ڴ� usinged�� �̿��ϴ°��� �Ϲ����̴�. ��Ʈ����ũ���� �ַ� ����ϸ� �ӵ����� �ʼ��̴�.

#include <iostream>
#include <bitset>		//�������� �ٲ㼭 ������ִ� ���̺귯��

using namespace std;

int main()
{
	//��Ʈ����������
	// << left shift, ���۷����� �����ε����� cout�� <<�� �ٸ� �ǹ̷� ���ȴ�.
	// >>
	// ~, &, |, ^

	unsigned int a = 3;
	
	cout << std::bitset<4>(a) << endl;		//0011

	unsigned int b = a << 1;

	cout << std::bitset<4>(b) << endl;		//0110

	//unsinged int���� ���������� ���� Ŀ�� �� *�����ڸ� ����ϴ� �� ���� left shift�����ڸ� ����ϴ� ���� �ξ� ������.

	cout << std::bitset<16>(~a) << " " << (~a) << endl;

	unsigned int x = 0b1100;
	unsigned int y = 0b0110;

	cout << std::bitset<4>(x & y) << endl;		//0100
	cout << std::bitset<4>(x | y) << endl;		//1110
	cout << std::bitset<4>(x ^ y) << endl;		//1010

	return 0;
}