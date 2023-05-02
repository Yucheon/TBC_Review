//난수 만들기 random numbers
#include <iostream>
#include <cstdlib>	//std::radn(), std::srand()
#include <ctime>
#include <random>

using namespace std;

//unsigned int PRNG()
//{
//	static unsigned int seed = 5523;		//시작하는 넘버
//
//	seed = 8253729 * seed + 2396403;
//
//	return seed % 32768;
//}

int getRandomNumber(int min, int max)		//범위 내에서 랜덤넘버생성
{
	static double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}
int main()
{
	//for (int count = 1; count <= 100; ++count)
	//{
	//	cout << PRNG() << "\t";

	//	if (count % 5 == 0)cout << endl;
	//}

	//std::srand(123);				//seed 설정


	//std::srand(static_cast<unsigned int>(std::time(0)));

	//for (int count = 1; count <= 100; ++count)
	//{
	//	cout << std::rand() << "\t";

	//	if (count % 5 == 0)cout << endl;
	//}

	//for (int count = 1; count <= 100; ++count)
	//{
	//	cout << getRandomNumber(2,15) << "\t";

	//	if (count % 5 == 0)cout << endl;
	//}

	std::random_device rd;
	std::mt19937 mersenne(rd());	//create a mesenne twister,
	std::uniform_int_distribution<>dice(1, 6);

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;

	return 0;
}