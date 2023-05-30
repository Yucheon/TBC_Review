//7.8 매개변수의 기본값, 파라마티에 기본값을 셋팅해줄 수 있따.
#include <iostream> 

using namespace std;

void print(int x = 100);		//in header 둘중 한군데에서만 기본값을 설정해주어야 함 

void print(int x=100)
{
	cout << x << endl;
}
int main()
{


	return 0;
}