#include <iostream>

namespace MySpace1
{
	namespace InnerSpace
	{
		int MyFuntion(int a, int b)
		{
			return a + b;
		} 
	}

}

namespace MySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

using namespace std;	//namespace std�ȿ��� doSomething��� �Լ��� ���⋚���� �浹�� ���� �ʴ´�.

int main()
{

	using namespace MySpace1;

	cout << MySpace1::InnerSpace::MyFuntion(3,8) << endl;
	cout << MySpace2::doSomething(3, 8) << endl;

	return 0;
}