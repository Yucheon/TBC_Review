#include <iostream>
#include <algorithm>

using namespace std;
						
#define MY_NUMBER 9		//메크로 거의 대문자로 작성하며, 코드를 읽다가 대문자를 만나면 우측의 문자로 교체함(문서 편집기)
#define MAX(a,b) a+b	//메크로는 단순히 바꿔주기만 하기 때문에 연산자 우선순위를 잘 고려하여야 한다.
#define LIKE_APPLE		// "LIKE_APPLE" 메크로를 정의함, 전처리기 안에서는 교체하지 않기 때문에 #ifdef가 있는 라인에서는 공백으로 바꾸지 않는다.
#define LIKE_BEOM		//#define의 효과는 이 파일 안에서만 효력을 발휘한다.

void dosomethint();

int main()
{
#ifdef LIKE_APPLE			//"LIKE_APPLE"정의 되어 있다면 (전처리기, 빌드에 들어가기 전에 실행한다,멀티 플렛폼 서비스 개발시 사용 이 프로그램이 윈도우인지 리눅스 인지 openGL을 쓸지 등등의 단계에서 사용 )
	cout << "APPle" << endl;//이를 출력함
#endif						//ifdef종료

#ifndef LIKE_APPLE
	cost << "Orange" << endl;
#endif // !LIKE_APPLE


	cout << MY_NUMBER << endl;			//9
	cout << 5*MAX(5,2) << endl;			//35가 아닌 27이 출력됨
	cout << std::max(1 + 1, 3) << endl;	//3

	dosomethint();
	return 0;
}