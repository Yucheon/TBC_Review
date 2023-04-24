//문자열 std string 소개
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//const string my_hello = "Hello, World";
	//cout << my_hello << endl;

	//cout << "Your name ? : ";
	//string name;
	////cin >> name;
	//std::getline(std::cin, name);

	//cout << "Your age ? : ";
	//string age;
	////cin >> age;
	//std::getline(std::cin,age);

	//cout << name << " " << age << endl;

	cout << "Your age ? : ";
	int age;
	cin >> age;
	std::cin.ignore(32767,'\n');		//\n을 만날떄 까지 32767개의 글자를 무시해라

	cout << "Your name ? : ";
	string name;
	std::getline(std::cin, name);

	return 0;
}