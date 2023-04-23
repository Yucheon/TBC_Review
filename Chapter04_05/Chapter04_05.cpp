//암시적 형변환과 명시적 형변환
#include <iostream> 
#include <typeinfo>

using namespace std;

int main()
{
	// numeric promotion , 데이터 형이 작은 곳에서 더 큰 곳으로 간다.
	float a = 123.0;
	double d = a; 

	cout << typeid(a).name() << endl;		//typeid().name() 현재 사용중인 데이터가 어떤 타입인지 반환

	//numeric conversion
	int i = 30000;
	char c = i;

	int i = int(4.0);	//cpp스타일
	int o = (int)4.0;	//c스타일
	int p = static_cast < int>(4.0);
	cout << static_cast<int>(c) << endl;	//48
	return 0;
}