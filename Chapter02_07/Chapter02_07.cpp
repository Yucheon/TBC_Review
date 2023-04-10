#include <iostream>
#include <limits>

using namespace std;

int main()
{
	char c1(65);		//c1 = 65;	
	char c2('A');		//�� ���ڸ� ǥ���� ���� '', ���ڿ��� ""

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;


	//C Ÿ���� ĳ����
	cout << (char)65 << endl;	
	cout << (int)'A' << endl;
	//c++��Ÿ��
	cout << char(65) << endl;
	cout << int('A') << endl;

	//���� ĳ���õ��� ���������� ��ȯ�� ������ �Ʒ��� static_cast�� �����Ϸ����� �̸� ��ȯ�� �Ǵ��� Ȯ���ϴ� �۾��� �̷������.
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;	//������ �����ϴ�. cin�� ��������
	cout << ch << endl;

	char ci;

	cin >> ci;
	cout << ci << " " << static_cast<int>(ci) << endl;

	cin >> ci;
	cout << ci << " " << static_cast<int>(ci) << endl;		//���ڸ� 3������ ���� �Է��ϸ� ������ �Է��� ��ٸ���.

	cin >> ci;
	cout << ci << " " << static_cast<int>(ci) << endl;

	cout << sizeof(char) << endl;										//1
	cout << (int)std::numeric_limits<char>::max()<< endl;				//127
	cout << (int)std::numeric_limits<char>::lowest() << endl;			//-128

	cout << (int)std::numeric_limits<unsigned char>::max() << endl;		//255
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;	//0

	// \n�� ���� �ٹٲ� endl�� �ٹٲ��ϰ� ���ۿ� �ִ� ���� �� ��Ƴ��� �ٹٲ��ض�, flush�� ���ۿ� �ִ°� ��Ƴ��⸸ �ض�

	wchar_t c;
	char16_t c3;

	return 0;
}