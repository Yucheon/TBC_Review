#include <iostream>

using namespace std;

int MultiplyTwoNumbers(int mum_a, int num_b)//함수의 이름은 가급적 자세히
{											//mum_a 매개변수, 파라미터 함수가 콜되어 사용될 떄 int num_a가 초기화 될 떄 인수를 받는다.
	int sum = mum_a * num_b;				//sum이 초기화 되고 계산한 값을 받음

	return sum;
}

int main()
{												//디버그 포인트 찍고 함수안으로 들어가고자 할 때 F11을 사용 (step into)
	cout<< MultiplyTwoNumbers(1,2) <<endl;		//함수를 콜할 떄 사용되는 1과 2가 인수 argument
	cout<< MultiplyTwoNumbers(3,4) <<endl;
	cout<<8+13 <<endl;

	return 0;
}