//6.16 포인터와 참조의 멤버 선택
#include <iostream>

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;

	person.age = 5;
	person.weight = 30;


	Person& ref = person;
	ref.age = 16;
	
	Person* ptr = &person;
	ptr->age = 30;

	(*ptr).age = 20;

	Person& ref2 = *ptr;
	ref2.age = 45;

	std::cout << &person << std::endl;
	std::cout << &ref2 << std::endl;
	return 0;
}