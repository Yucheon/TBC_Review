#include <iostream>	//cout, cin, endl ���� iostream�ȿ� ���ǵǾ� �ִ�.
#include <cstdio>	//printf

int main()
{
	using namespace std;							//�����Ϸ��� cout�̳� cin endl�� ������ �Ǹ�	
													//�ڵ����� std���ӽ����̽��� ���� �����Ϸ��� ã�Ƽ� ����������

	int x = 1024;
	double pi = 3.141592;

	cout << "I love this lecturel" << endl;			//std��� �̸��� �̸� �����ȿ� ���� �Ǿ��ְ�
	cout << "X is " << x << "pi is" << pi << endl;	//�װ��� ����ϱ� ���ؼ��� std��� ���Ӱ����ȿ�
																//����ִ� cout�� ����ϱ� ���ؼ� ::�� �־��ش�.
																//<<�ƿ�ǲ ���۷�����

	cout << "abc" << "\t" << "def" << endl;			//�Ʒ��ٰ� ���� ������ def cdef��� ��, �ٸ��� ����
	cout << "ab" << "\t" << "cdef" << endl;
		
	cout << "\a";										//����� ���
	

	cout << "Before your input, x was" << x << endl;	//��Ʈ���� �Ϻο� �Ұ��� ���� cout�� cin, ���۷����Ϳ����ε����� ���� ����°� ��Ʈ��ŷ�� �ٽ� ���
	cin >> x;							//cin �Է��� �޾Ƽ� ��򰡿� �����Ѵٴ� �ǹ̸� �����⵵ ��, input operator
	cout << " Your input is " << x << endl;
	return 0;
}