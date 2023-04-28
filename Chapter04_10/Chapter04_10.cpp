//구조체
#include <iostream>

using namespace std;


struct Person
{
	double height;
	float weight;
	int age;
	string name;

	void printPerson()
	{
		cout << height << " " << weight << " " << age << endl;
	}
};

struct Employee		//14byte
{
	short id;		//2 bytes
	int age;		//4bytes
	double wage;	//8bytes
};

int main()
{
	Person me{
		20,
		52.1f,
		11,
		"D D"
	};

	me.printPerson();

	Employee emp1;

	cout << sizeof(emp1) << endl;		//16bytes(14+2, padding)
	//컴퓨터가 잘 처리할 수 있도록 배치할 떄 2bytes를 더 필요로 함
	return 0;
}