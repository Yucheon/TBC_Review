//부동소수점수,  둥둥 떠다닌다 점이 둥둥 떠다니면서 숫자를 바꾼다.
#include <iostream>
#include <iomanip>		//소수점 몇번째 자리까지 출력할 수 있을지 지정해 줄수 있는 헤더
#include <limits>
#include <cmath>		//std::isnan()함수 사용, 정상적인 숫자인지 출력하기 위해 사용 정상적인 숫자면 false를 반환

int main()
{
	using namespace std;

	float f;
	double d;						//가장 많이 사용
	long double ld;

	cout << sizeof(f) << endl;		//4
	cout << sizeof(d) << endl;		//8
	cout << sizeof(ld) << endl;		//8

	//각 변수 유형에서 출력할 수 있는 최댓값
	cout << numeric_limits<float>::max() << endl;			//3.40282e+38
	cout << numeric_limits<double>::max() << endl;			//1.79769e+308
	cout << numeric_limits<long double>::max() << endl;		//1.79769e+308

	cout << "\n" << endl;
	//각 변수 유형에서 출력할 수 있는 최솟값을 절대값으로
	cout << numeric_limits<float>::min() << endl;			//1.17549e-38
	cout << numeric_limits<double>::min() << endl;			//2.22507e-308
	cout << numeric_limits<long double>::min() << endl;		//2.22507e-308

	cout << "\n" << endl;
	//각 변수 유형에서 출력할 수 있는 최솟값
	cout << numeric_limits<float>::lowest() << endl;		//-3.40282e+38
	cout << numeric_limits<double>::lowest() << endl;		//-1.79769e+308
	cout << numeric_limits<long double>::lowest() << endl;	//-1.79769e+308

	cout << std::setprecision(16) << endl;					//앞으로 출력 시킬 것에 대한 설정을 바꿔줌 소숫점 뒤 ()안의 숫자만큼의 자리까지 출력
	cout << 1.0 / 3.0 << endl;								//0.3333333333333333

	cout << "\n" << endl;
	//과학적 표기법
	cout << 3.14 << endl;									//3.14
	cout << 31.4e-1 << endl;								//3.14
	cout << 31.4e-2 << endl;								//0.314
	cout << 31.4e1 << endl;									//314
	cout << 31.4e2 << endl;									//3140

	cout << "\n" << endl;

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;
	//정상적인 숫자가 아닌 경우 std::isnan(nan)은 1을 출력
	cout << posinf << " " << std::isnan(posinf) << endl;		//inf 0
	cout << neginf << " " <<std::isnan(neginf)<< endl;			//-inf 0
	cout << nan <<" "<<std::isnan(nan) << endl;				//-nan(ind) 1
			
	return 0;
}