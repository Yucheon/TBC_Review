#include <iostream>	//cout, cin, endl 등이 iostream안에 정의되어 있다.
#include <cstdio>	//printf

int main()
{
	using namespace std;							//컴파일러가 cout이나 cin endl을 만나게 되면	
													//자동으로 std네임스페이스로 가서 컴파일러가 찾아서 컴파일해줌

	int x = 1024;
	double pi = 3.141592;

	cout << "I love this lecturel" << endl;			//std라는 이름의 이름 공간안에 정의 되어있고
	cout << "X is " << x << "pi is" << pi << endl;	//그것을 사용하기 위해서는 std라는 네임공간안에
																//들어있는 cout을 사용하기 위해서 ::을 넣어준다.
																//<<아웃풋 오퍼레이터

	cout << "abc" << "\t" << "def" << endl;			//아랫줄과 같은 열에서 def cdef출력 즉, 줄맞춤 해줌
	cout << "ab" << "\t" << "cdef" << endl;
		
	cout << "\a";										//경고음 출력
	

	cout << "Before your input, x was" << x << endl;	//스트림의 일부에 불과할 뿐인 cout과 cin, 오퍼레이터오버로딩에서 파일 입출력과 네트워킹에 다시 사용
	cin >> x;							//cin 입력을 받아서 어딘가에 저장한다는 의미를 가지기도 함, input operator
	cout << " Your input is " << x << endl;
	return 0;
}