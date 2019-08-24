#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int solve(string& str, int num)
{
	int count = 0;
	for (int i = 0; i < num - 1; ++i)
	{
		if ('a' <= str[i] <= 'z')
			count++;
		else if ('A' <= str[i] <= 'Z' && 'a' <= str[i + 1] <= 'z')
			count += 2;
		else if ('A' <= str[i] <= 'Z' && 'A' <= str[i + 1] <= 'Z')
		{
			count++;
			int j = i;
			while ('A' <= str[j] <= 'Z')
			{
				count++;
				j++;
			}
			count++;
			i = j;
		}
	}
	return count;
}

int main()
{
	int num;
	while (cin >> num)
	{
		string str;
		cin >> str;
		cout << solve(str, num) << endl;
	}
	return 0;
}



//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
//int solve(vector<int> Vec, vector<int>& dp)
//{
//	for (size_t i = 0; i < Vec.size(); i++)
//	{
//		for (int j = i - 1; j >= 0; j--)
//		{
//			if (Vec[i] < Vec[j])
//			{
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//	}
//	return dp.size();
//}
//
//
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		vector<int> Vec(num);
//		for (int i = 0; i < num; ++i)
//			cin >> Vec[i];
//		
//
//	}
//	return 0;
//}