//�ε��Ҽ�����,  �յ� ���ٴѴ� ���� �յ� ���ٴϸ鼭 ���ڸ� �ٲ۴�.
#include <iostream>
#include <iomanip>		//�Ҽ��� ���° �ڸ����� ����� �� ������ ������ �ټ� �ִ� ���
#include <limits>
#include <cmath>		//std::isnan()�Լ� ���, �������� �������� ����ϱ� ���� ��� �������� ���ڸ� false�� ��ȯ

int main()
{
	using namespace std;

	float f;
	double d;						//���� ���� ���
	long double ld;

	cout << sizeof(f) << endl;		//4
	cout << sizeof(d) << endl;		//8
	cout << sizeof(ld) << endl;		//8

	//�� ���� �������� ����� �� �ִ� �ִ�
	cout << numeric_limits<float>::max() << endl;			//3.40282e+38
	cout << numeric_limits<double>::max() << endl;			//1.79769e+308
	cout << numeric_limits<long double>::max() << endl;		//1.79769e+308

	cout << "\n" << endl;
	//�� ���� �������� ����� �� �ִ� �ּڰ��� ���밪����
	cout << numeric_limits<float>::min() << endl;			//1.17549e-38
	cout << numeric_limits<double>::min() << endl;			//2.22507e-308
	cout << numeric_limits<long double>::min() << endl;		//2.22507e-308

	cout << "\n" << endl;
	//�� ���� �������� ����� �� �ִ� �ּڰ�
	cout << numeric_limits<float>::lowest() << endl;		//-3.40282e+38
	cout << numeric_limits<double>::lowest() << endl;		//-1.79769e+308
	cout << numeric_limits<long double>::lowest() << endl;	//-1.79769e+308

	cout << std::setprecision(16) << endl;					//������ ��� ��ų �Ϳ� ���� ������ �ٲ��� �Ҽ��� �� ()���� ���ڸ�ŭ�� �ڸ����� ���
	cout << 1.0 / 3.0 << endl;								//0.3333333333333333

	cout << "\n" << endl;
	//������ ǥ���
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
	//�������� ���ڰ� �ƴ� ��� std::isnan(nan)�� 1�� ���
	cout << posinf << " " << std::isnan(posinf) << endl;		//inf 0
	cout << neginf << " " <<std::isnan(neginf)<< endl;			//-inf 0
	cout << nan <<" "<<std::isnan(nan) << endl;				//-nan(ind) 1
			
	return 0;
}