//6.8 �����Ϳ� ���� �迭, �� �迭�� ����ü�� Ŭ������ ����ִ� ��쿡�� �����Ͱ� ���޵��� �ʰ� �뤊�� ���޵ȴ�.
#include <iostream>

using namespace std;

void printArray(int array[])		//�̋� 'int array[]'�� 'int *array'�� ����.
{
	cout << sizeof(array) << endl;
	cout << *array << endl;

	*array = 2000;
}

int main()
{
	int array[5] = { 2,5,7,3,5 };		//array�� ����� �迭�� �ƴ϶� ��������



	cout << array[0] << " " << array[1] << endl;
	cout << array << endl;
	cout << &array[0] << endl;

	cout << *array << endl;

	int* ptr = array;
	cout << "ptr�� �ּ�"<< & ptr << endl;
	cout << "array�� �ּ�" << &array << endl;

	cout << sizeof(array) << endl;		//array�� ��ü�� ���������
	cout << sizeof(ptr) << endl;		//int���� 4����Ʈ�� �ƴ� �����ͺ����� ũ�Ⱑ 4����Ʈ

	char name[] = "jack jack";
	cout << *name << endl;

	printArray(array);					//�Ķ���ͷ� �Ѱ��� �� �迭ó�� ������ ���������� ������ �̹Ƿ� 
										//4����Ʈ�� ũ�⸦ ������ �ȴ�.

	cout << *array << endl;

	cout << *ptr << " " << *(ptr + 2) << endl;	//2000 �ٴ����� 7�� ���
	return 0;
}