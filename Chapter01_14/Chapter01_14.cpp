#include <iostream>
#include <algorithm>

using namespace std;
						
#define MY_NUMBER 9		//��ũ�� ���� �빮�ڷ� �ۼ��ϸ�, �ڵ带 �дٰ� �빮�ڸ� ������ ������ ���ڷ� ��ü��(���� ������)
#define MAX(a,b) a+b	//��ũ�δ� �ܼ��� �ٲ��ֱ⸸ �ϱ� ������ ������ �켱������ �� ����Ͽ��� �Ѵ�.
#define LIKE_APPLE		// "LIKE_APPLE" ��ũ�θ� ������, ��ó���� �ȿ����� ��ü���� �ʱ� ������ #ifdef�� �ִ� ���ο����� �������� �ٲ��� �ʴ´�.
#define LIKE_BEOM		//#define�� ȿ���� �� ���� �ȿ����� ȿ���� �����Ѵ�.

void dosomethint();

int main()
{
#ifdef LIKE_APPLE			//"LIKE_APPLE"���� �Ǿ� �ִٸ� (��ó����, ���忡 ���� ���� �����Ѵ�,��Ƽ �÷��� ���� ���߽� ��� �� ���α׷��� ���������� ������ ���� openGL�� ���� ����� �ܰ迡�� ��� )
	cout << "APPle" << endl;//�̸� �����
#endif						//ifdef����

#ifndef LIKE_APPLE
	cost << "Orange" << endl;
#endif // !LIKE_APPLE


	cout << MY_NUMBER << endl;			//9
	cout << 5*MAX(5,2) << endl;			//35�� �ƴ� 27�� ��µ�
	cout << std::max(1 + 1, 3) << endl;	//3

	dosomethint();
	return 0;
}