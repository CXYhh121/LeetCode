#define _CRT_SECURE_NO_WARNINGS



//剪花布条
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str1, str2;
//	while (cin >> str1 >> str2)
//	{
//		int res = 0;
//		size_t pos = 0;
//		while ((pos = str1.find(str2, pos)) != string::npos)
//		{
//			pos += str2.size();
//			++res;
//		}
//		cout << res << endl;
//	}
//	return 0;
//}




//客似云来解法一
//#include <iostream>
//
//using namespace std;
//long long zaocan(int day)
//{
//	long long sum = 0;
//	if (day == 1)
//		sum = 1;
//	else if (day == 2)
//		sum = 1;
//	else
//		sum = zaocan(day - 1) + (day - 2);
//	return sum;
//}
//
//int main()
//{
//	int day1, day2;
//	while (cin >> day1 >> day2)
//	{
//		long long res = 0;
//		for (int i = day1; i <= day2; ++i)
//		{
//			res += zaocan(i);
//		}
//		cout << res << endl;
//	}
//	return 0;
//}


//客似云来解法二
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<long long> v{1,1};
//	v.resize(80);
//	for (int i = 2; i < 80; ++i)
//	{
//		v[i] = v[i - 1] + v[i - 2];
//	}
//	int day1, day2;
//	while (cin >> day1 >> day2)
//	{
//		long long res = 0;
//		for (int i = day1; i <= day2; ++i)
//		{
//			res += v[i - 1];
//		}
//		cout << res << endl;
//	}
//
//	return 0;
//}
