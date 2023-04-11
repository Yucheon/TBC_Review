//리터럴 상수 상수란 숫자가 변하지 않는 것

#include <iostream>

int main()
{
	using namespace std;

	float pi = 3.14f;	//글자를 적어서 표현하는 상수가 리터럴 상수, f를 적어주지 않으면 double형이지만 float형으로 자동 캐스팅 됨
	
	//pi는 변수이며 메모리에 공간을 차지하고 값을 바꿀 수 있음
	int i = 123424u;	//unsingend로 캐스팅됨 하지만 차라리 사용하지 않는게 좋음
	int e = (unsigned int)555;// 뒤에 'u'를 적어주면 잘 안보이기 때문에 명시적으로 이렇게 적어 주면 좋다.
	double d = 6.0e-100;	//과학적 표기법

	// 16진수와 8진수는 굉장히 자주 사용되므로 알아 두어야 한다.


	//Decimal(십진수): 0 1 2 3 4 5 6 7 8 9 10
	//Octal(팔진수)  : 0 1 2 3 4 5 6 7 10 11 12 13.....
	//Hexa (16진수)	: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	int x = 012;			//앞에 '0'을 붙이면 8진수라는 의미가 된다.
	cout << x << endl;		//10 팔진수 12는 십진수로 표현하면 10

	int y = 0xf;			//16진수 
	cout << y << endl;		//15

	int q = 0b0110'1001'0010;			//'0b'를 붙이면 이진수 C++14부터 사용
	cout << q << endl;					//1682

	//하드 코딩으로 리터럴을 직접 넣는것은 장기적으로 안좋을 수 있다.
	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * 10;			//이렇게 하지 말고

	int price_1 = num_items*price_per_item;//이렇게 하는 것을 추천

	return 0;
}