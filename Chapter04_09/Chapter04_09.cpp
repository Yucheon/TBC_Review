//�ڷ������� ���� �ٿ��ֱ� type aliases
#include <iostream>
#include <vector>
int main()
{
	using namespace std;

	typedef double distance_t;		//distance_t�� ����� ���� double�� �Ÿ���� �������� ����Ϸ��� ����� ���̴�.

	//vector<pair<string, int>>�� ������ ������ �� ���� vector<pair<string, int>>�� �� ���ֱ⿡�� �ʹ� ���.
	typedef vector<pair<string, int>> pairlist_t;

	//using�� ����� ���� �ֵ�.
	using pairlist_t = vector<pair<string, int>>;

	double		my_distance;		//����� double�� �����ڷ�
	distance_t	home2work;			//����� ���� double�� �ڷ� ����ڰ� distance_t�� double�� �ڷ�� ������ ���������̴�.
									//�����Ϸ� ���忡���� double�� ����. double�� float�� ��� �ؾ��� �� �Ǿ��� double�� �ٲ��ָ� �ȴ�.


	return 0;
}