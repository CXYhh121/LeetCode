#define _CRT_SECURE_NO_WARNINGS
//阿拉伯数字转中文数字
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		string str = std::to_string(num);
//		string src = " SBQWY";
//		string result;
//		int len = str.size() - 1;
//
//		for (int i = len; i >= 0; --i)
//		{
//			if (i == len)
//				result += str[i];
//			else
//			{
//				result += src[len - i];
//				result += str[i];
//			}
//		}
//		reverse(result.begin(), result.end());
//		cout << result << endl;
//	}
//	return 0;
//}

//A,B字符串的最长公共子序列
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	string str1, str2;
//	while (cin >> str1 >> str2)
//	{
//		if (str1.size() > str2.size())
//			swap(str1, str2);
//		int len1 = str1.size();
//		int len2 = str2.size();
//
//		int start = 0, maxlen = 0;
//		vector<vector<int>> result(len1+1, vector<int>(len2+1,0));
//		for (int i = 1; i <= len1; ++i)
//		{
//			for (int j = 1; j <= len2; ++j)
//			{
//				if (str1[i - 1] == str2[j - 1])
//					result[i][j] = result[i - 1][j - 1] + 1;
//				if (result[i][j] > maxlen)
//				{
//					maxlen = result[i][j];
//					start = i - maxlen;
//				}
//			}
//		}
//		cout << str1.substr(start, maxlen) << endl;
//	}
//	return 0;
//}


//最长连续子序列的和
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> vv(n);
//		vector<int> result(n);
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> vv[i];
//		}
//		int value, maxvalue = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			value = max(vv[i], result[i - 1] + vv[i]);
//			maxvalue = max(value, maxvalue);
//		}
//		cout << maxvalue << endl;
//	}
//	return 0;
//}


//小于n的数字中有几个幸运数
//#include <iostream>
//
//using namespace std;
//
//int Tenadd(int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}
//
//int Twoadd(int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		sum += n & 1;
//		n = n >> 1;
//	}
//	return sum;
//}
//
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		int count = 0;
//		for (int i = 0; i < num; ++i)
//		{
//			int sum1 = Tenadd(i);
//			int sum2 = Twoadd(i);
//			if (sum1 == sum2)
//				count++;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}