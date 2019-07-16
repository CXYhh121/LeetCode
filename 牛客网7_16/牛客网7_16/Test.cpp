#define _CRT_SECURE_NO_WARNINGS


//求和
//#include<iostream>
//#include<vector>
//using namespace std;
//
//void help(int n, int m, vector<int>& v, int beg) {
//	//if (beg>n) return;
//	if (m == 0) {
//		for (int i = 0; i<v.size(); i++) {
//			i == 0 ? cout << v[i] : cout << " " << v[i];
//		}
//		cout << endl;
//	}
//	for (int i = beg; i <= n&&i <= m; i++) {
//		v.push_back(i);
//		help(n, m - i, v, i + 1);
//		v.pop_back();
//	}
//}
//int main() {
//	int n, m;
//	while (cin >> n >> m) {
//		vector<int> v;
//		help(n, m, v, 1);
//	}
//}



//电话号码
//#include <set>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string Telephone(string str)
//{
//	string num = "22233344455566677778889999";
//	int count = 0;
//	string res;
//	for (size_t i = 0; i < str.size(); ++i)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			res += num[str[i] - 'A'];
//			count++;
//			if (count == 3)
//				res += '-';
//		}
//		else if (str[i] >= '0' && str[i] <= '9')
//		{
//			res += str[i];
//			count++;
//			if (count == 3)
//				res += '-';
//		}
//	}
//	return res;
//}
//
//int main()
//{
//	int n;
//	set<string> s;
//	while (cin >> n)
//	{
//		string str;
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> str;
//			s.insert(Telephone(str));
//		}
//		/*for (auto e : s)
//		{
//			cout << e << endl;
//		}*/
//
//		set<string>::iterator it = s.begin();
//		while (it != s.end())
//		{
//			cout << *it << endl;
//		}
//		cout << endl;
//	}
//
//}


//电话号码
//#include<iostream>
//#include<string>
//#include<set>
//using namespace std;
//int main()
//{
//	string s;
//	int length;
//	string NUM = "22233344455566677778889999";
//	while (cin >> length)
//	{
//		set<string> data;
//		int cnt;
//		for (int i = 0; i < length; i++)
//		{
//			cnt = 0;
//			string res;
//			cin >> s;
//			for (int j = 0; j < s.length(); j++)
//			{
//				if (s[j] >= 'A'&&s[j] <= 'Z')
//				{
//					res += NUM[s[j] - 'A'];
//					cnt++;
//					if (cnt == 3)
//						res += "-";
//				}
//				else if (s[j] >= '0'&&s[j] <= '9')
//				{
//					res += s[j];
//					cnt++;
//					if (cnt == 3)
//						res += "-";
//				}
//			}
//			data.insert(res);
//		}
//		/*for (set<string>::iterator it = data.begin(); it != data.end(); it++)
//			cout << *it << endl;*/
//		for (auto e : data)
//			cout << e << endl;
//		cout << endl;
//	}
//	return 0;
//}