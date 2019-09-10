#define _CRT_SECURE_NO_WARNINGS

//顺丰笔试
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool IsLegal1(string& str1, int n)
//{
//	int sum = 0;
//	int len = str1.size();
//	for (int i = 0; i < len; ++i)
//	{
//		int value = str1[i] - '0';
//		sum += value * pow(n, len - i - 1);
//	}
//	if (sum >= 0 && sum < 24)
//		return true;
//	else
//		return false;
//}
//
//bool IsLegal2(string& str2, int n)
//{
//	int sum = 0;
//	int len = str2.size();
//	for (int i = 0; i < len; ++i)
//	{
//		int value = str2[i] - '0';
//		sum += value * pow(n, len - i - 1);
//	}
//	if (sum >= 0 && sum < 60)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	string str;
//	while (cin >> str)
//	{
//		int pos = str.find(':');
//		string str1 = str.substr(0, pos - 1);
//		string str2 = str.substr(pos + 1, str.size() - 1);
//
//		vector<int> result;
//		for (int i = 0; i < str1.size(); ++i)
//		{
//			if (i <= str1[i] - '0')
//				continue;
//			if (IsLegal1(str1, i))
//				result.push_back(i);
//		}
//		if (result.empty())
//			cout << -1 << endl;
//
//		vector<int> res;
//		for (int i = 0; i < str2.size(); ++i)
//		{
//			if (i < str2[i] - '0')
//				continue;
//			if (IsLegal2(str2, i))
//				res.push_back(i);
//		}
//		if (res.empty())
//			cout << -1 << endl;
//		for (int i = 0; i < result.size(); ++i)
//		{
//			//if ()
//				cout << result[i];
//		}
//		cout << endl;
//	}
//	return 0;
//}



//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int Solve(int area)
//{
//	if (area == 1 || area == 2)
//		return 4;
//	if (area == 3 || area == 4)
//		return 6;
//	if (area == 5)
//		return 7;
//}
//
//int main()
//{
//	int T;
//	while (cin >> T)
//	{
//		vector<int> resv(T);
//		vector<int> result(T, 0);
//		for (int i = 0; i < T; ++i)
//			cin >> resv[i];
//
//		for (int i = 0; i < T; ++i)
//		{
//			int time = Solve(resv[i]);
//			result.push_back(time);
//		}
//
//		for (auto& e : result)
//			cout << e << endl;
//	}
//	return 0;
//}


//百度笔试取数
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		vector<int> Va(n);
//		vector<int> Vb(n);
//		for (int i = 0; i < n; ++i)
//			cin >> Va[i];
//		for (int i = 0; i < n; ++i)
//			cin >> Vb[i];
//		sort(Va.begin(), Va.end());
//		sort(Vb.begin(), Vb.end());
//
//		int sum = Va[n-1];
//		
//			int i, j;
//			for (j = 0; j < m - 1; ++j)
//			{
//				
//				for (i = n - 1; i >= 0; --i)
//				{
//					Va[i] -= Vb[j];
//				}
//				sum += Va[n - j - 2];
//				//Va.pop_back();							
//			}
//
//		cout << sum << endl;
//	}
//	return 0;
//}