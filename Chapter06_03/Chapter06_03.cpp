//6.3 �迭�� �ݺ���
#include <iostream>

using namespace std;

int main()
{

	int scores[] = { 84,82,76,81,56 };
	const int num_students = sizeof(scores) / sizeof(int);

	int max_score = 0;
	int total_score = 0;
	for (int i = 0; i < num_students; ++i)
	{
		total_score += scores[i];

		if (max_score< scores[i])
		{
			max_score=scores[i];
		}
	}

	cout << "�ְ������� " << max_score << endl;
	return 0;
}