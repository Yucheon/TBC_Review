//6.2 �迭 ���� [2 of 2] array
#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

void doSomething(int students_score[20])	//�迭�� �ƴ϶� ������, �̸� ��ü�� �ּ���
{
	cout << (int)&students_score << endl;

}
int main()
{
	const int num_studets = 20;

	int students_scores[num_studets];

	cout << (int) & students_scores << endl;
	//cout << (int)&(students_scores[0]) << endl;
	//cout << (int)&(students_scores[1]) << endl;
	//cout << (int)&(students_scores[2]) << endl;
	//cout << (int)&(students_scores[3]) << endl;

	doSomething(students_scores);

	//cout << sizeof(students_scores) << endl;

	return 0;
}