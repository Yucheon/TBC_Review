#include <iostream>
#include <limits>

using namespace std;

int main()
{
	char c1(65);		//c1 = 65;	
	char c2('A');		//한 글자를 표현할 떄는 '', 문자열은 ""

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;


	//C 타입의 캐스팅
	cout << (char)65 << endl;	
	cout << (int)'A' << endl;
	//c++스타일
	cout << char(65) << endl;
	cout << int('A') << endl;

	//위의 캐스팅들은 강제적으로 변환해 주지만 아래의 static_cast는 컴파일러에게 미리 변환이 되는지 확인하는 작업이 이루어진다.
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;	//변수도 가능하다. cin도 마찬가지
	cout << ch << endl;

	char ci;

	cin >> ci;
	cout << ci << " " << static_cast<int>(ci) << endl;

	cin >> ci;
	cout << ci << " " << static_cast<int>(ci) << endl;		//글자를 3개보다 적게 입력하면 나머지 입력을 기다린다.

	cin >> ci;
	cout << ci << " " << static_cast<int>(ci) << endl;

	cout << sizeof(char) << endl;										//1
	cout << (int)std::numeric_limits<char>::max()<< endl;				//127
	cout << (int)std::numeric_limits<char>::lowest() << endl;			//-128

	cout << (int)std::numeric_limits<unsigned char>::max() << endl;		//255
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;	//0

	// \n은 그저 줄바꿈 endl은 줄바꿈하고 버퍼에 있는 것을 다 쏟아내고 줄바꿈해라, flush는 버퍼에 있는걸 쏟아내기만 해라

	wchar_t c;
	char16_t c3;

	return 0;
}