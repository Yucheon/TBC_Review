//���� ����, ���� ����, ���� ����, �ܺ� ����
#include <iostream>
#include "MyConstance.h"
using namespace std;

int value = 125;

extern void doSomething();		//test.cpp���Ͽ� �ִ� doSomething()�Լ��� ����ϱ� ���� ���漱��, externŰ������� ����, ��� �ٸ����Ͽ� ������ ��밡��
extern int u;
//
//void dosomething()
//{
//	static int a = 1;	//os�� ���� ���� �޸𸮰� ����, �� ���� ���� ������ ����� �� ���� �޸𸮸� ���
//	++a;				//�ʱ�ȭ�� �ѹ��ۿ� ���� ����, �ʱ�ȭ�� �ݵ�� �ʿ�
//	cout << a << endl;
//}

int main()
{
	//cout << value << endl;

	//int value = 2;

	//cout << value << endl;
	//cout << ::value << endl;	//���������� ����ϴ� ���

	doSomething();
	doSomething();

	cout << u << endl;

	cout << "in CHapter04_02"<<Constants::pi << "  " << &Constants::pi<< endl;

	return 0;
}

//		int g_x;			external linkage 
//		static int g_x;		internal linkage
//		const int g_x;		����� �� ����
// 
//		extern int g_z;
// 
// 
// 
//		