//6.8 포인터와 정적 배열, 단 배열이 구조체나 클래스에 들어있는 경우에는 포인터가 전달되지 않고 통쨰로 전달된다.
#include <iostream>

using namespace std;

void printArray(int array[])		//이떄 'int array[]'와 'int *array'는 같다.
{
	cout << sizeof(array) << endl;
	cout << *array << endl;

	*array = 2000;
}

int main()
{
	int array[5] = { 2,5,7,3,5 };		//array는 사실은 배열이 아니라 포인터임



	cout << array[0] << " " << array[1] << endl;
	cout << array << endl;
	cout << &array[0] << endl;

	cout << *array << endl;

	int* ptr = array;
	cout << "ptr의 주소"<< & ptr << endl;
	cout << "array의 주소" << &array << endl;

	cout << sizeof(array) << endl;		//array의 전체의 사이즈출력
	cout << sizeof(ptr) << endl;		//int여서 4바이트가 아닌 포인터변수의 크기가 4바이트

	char name[] = "jack jack";
	cout << *name << endl;

	printArray(array);					//파라미터로 넘겨줄 때 배열처럼 보여도 내부적으로 포인터 이므로 
										//4바이트의 크기를 가지게 된다.

	cout << *array << endl;

	cout << *ptr << " " << *(ptr + 2) << endl;	//2000 다다음의 7이 출력
	return 0;
}