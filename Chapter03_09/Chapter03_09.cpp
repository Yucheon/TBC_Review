//비트 플래그, 비트 마스크
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//비효율적인 방식
	//bool item1_flag = false;
	//bool item2_flag = false;
	//bool item3_flag = false;
	//bool item4_flag = false;

	////event
	//item1_flag = true;

	//item2_flag = false;

	//if (item3_flag == true)
	//{
	//	//event
	//}

	//if (item3_flag==true&&item4_flag==false)
	//{
	//	item3_flag = false;
	//	item4_flag = true;

	//}

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;

	unsigned char items_flag = 0;
	cout <<"No item"<< bitset<8>(items_flag) << endl;

	//item0 on
	items_flag |= opt0;
	
	//item 0 get!
	cout << "items_get!" << endl;
	cout << bitset<8>(items_flag) << endl;

	//item 3 get!
	items_flag |= opt3;
	cout << "item3 get!" << bitset<8>(items_flag) << endl;

	//item3 lost!
	items_flag &= ~opt3;
	cout << "item3 Lost!"<<bitset<8>(items_flag) << endl;

	//has item1?
	if (items_flag&opt1)
	{
		cout << "has item1" << endl;
		cout << bitset<8>(items_flag) << endl;
	}

	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2,3 obtained" << bitset<8>(items_flag) << endl;

	if ((items_flag & opt2)&&!(items_flag&opt1)) //opt2를 가지고 있으면서 동시에 opt1을 가지고 있지 않을 때
	{
	/*	items_flag ^= opt2;
		items_flag ^= opt1;*/
		items_flag ^= (opt2 | opt1);
		cout << bitset<8>(items_flag) << endl;
	}
	return 0;
}
