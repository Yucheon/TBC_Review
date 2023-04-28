//자료형에게 가명 붙여주기 type aliases
#include <iostream>
#include <vector>
int main()
{
	using namespace std;

	typedef double distance_t;		//distance_t를 사용할 때는 double을 거리라는 개념으로 사용하려고 사용한 것이다.

	//vector<pair<string, int>>형 변수를 선언할 때 마다 vector<pair<string, int>>를 다 쳐주기에는 너무 길다.
	typedef vector<pair<string, int>> pairlist_t;

	//using을 사용할 수도 있따.
	using pairlist_t = vector<pair<string, int>>;

	double		my_distance;		//평범한 double형 변수자료
	distance_t	home2work;			//사용자 정의 double형 자료 사용자가 distance_t를 double형 자료로 정의한 변수유형이다.
									//컴파일러 입장에서는 double과 같다. double을 float로 사용 해야할 때 맨앞의 double만 바꿔주면 된다.


	return 0;
}