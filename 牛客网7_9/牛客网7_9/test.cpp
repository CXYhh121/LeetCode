#define _CRT_SECURE_NO_WARNINGS

//Å£¿ÍÍøÌÔ±¦Íøµê
//#include <iostream>
//
//using namespace std;
//
//int main(){
//	int year1, month1, day1, year2, month2, day2;
//	int d[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
//	{
//		int sum = 0;
//		int year = year1;
//
//		for (int i = year1; i <= year2 - 1; ++i){
//			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) sum += 580;
//			else  sum += 579;
//		}
//
//		for (int i = 0; i <= month1 - 1; ++i){
//			int temp = 0;
//			if (i == month1 - 1) temp = day1 - 1;
//			else temp = d[i];
//			if (i != 1 && i != 2 && i != 4 && i != 6 && i != 10){ sum -= temp * 2; }
//			else sum -= temp;
//		}
//
//		for (int i = 0; i <= month2 - 1; ++i){
//			int temp = 0;
//			if (i == month2 - 1) temp = day2;
//			else temp = d[i];
//			if (i != 1 && i != 2 && i != 4 && i != 6 && i != 10){ sum += temp * 2; }
//			else sum += temp;
//		}
//
//		cout << sum << endl;
//	}
//	return 0;
//}


//ì³²¨ÄÇÆõ·ïÎ²
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	v.resize(100001);
	v[0] = 1;
	v[1] = 2;
	for (int i = 2; i < 100000; i++)
	{
		v[i] = (v[i - 1] + v[i - 2]) % 1000000;
	}
	int n;
	while (cin >> n)
	{
		if (n < 31)
			cout << v[n - 1] << endl;
		else
			cout << setw(6) << setfill('0') << v[n - 1] << endl;
	}

	return 0;
}