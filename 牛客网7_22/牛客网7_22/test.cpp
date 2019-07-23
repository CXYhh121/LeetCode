#define _CRT_SECURE_NO_WARNINGS


//数据库连接池
//#include <iostream>
//#include <string>
//#include <set>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		string id, op;
//		int maxsize = 0;
//		set<string> s;
//		for (int i = 0; i < num; ++i)
//		{
//			cin >> id >> op;
//			if (op == "connect")
//				s.insert(id);
//			if (op == "disconnect")
//				s.erase(id);
//			int size = s.size();
//			maxsize = max(maxsize, size);
//		}
//		cout << maxsize << endl;
//	}
//	return 0;
//}


//mkdir
//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<string> list(n);
//		vector<bool> flag(n, true);
//		for (int i = 0; i < n; ++i) cin >> list[i];
//		sort(list.begin(), list.end());
//
//		for (int i = 0; i < list.size() - 1; ++i)
//		{
//			// 1、两串相同
//			// 2、前串是后串的子串，而且后串后一位是 '/'
//			if (list[i] == list[i + 1]) flag[i] = false;
//			else if (list[i].size() < list[i + 1].size() && \
//				list[i] == list[i + 1].substr(0, list[i].size()) && list[i + 1][list[i].size()] == '/')
//				flag[i] = false;
//		}
//
//		for (int i = 0; i < list.size(); ++i)
//		if (flag[i]) cout << "mkdir -p " << list[i] << endl;
//		cout << endl;
//	}
//	return 0;
//}




//mkdir
//#include <iostream>
//#include <vector>
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
//		vector<string> mv(num);
//		vector<bool> tv(num, true);
//		for (int i = 0; i < num; i++)
//			cin >> mv[i];
//		sort(mv.begin(), mv.end());
//
//		for (size_t i = 0; i < mv.size() - 1; i++)
//		{
//			if (mv[i] == mv[i + 1])
//				tv[i] = false;
//			if (mv[i].size() < mv[i + 1].size() && mv[i] == mv[i + 1].substr(0, mv[i].size()) 
//				&& mv[i + 1][mv[i].size()] == '/')
//				tv[i] = false;
//		}
//		for (size_t i = 0; i < mv.size(); ++i)
//		{
//			if (tv[i] == true)
//				cout << "mkdir -p" << mv[i] << endl;
//			
//		}
//		cout << endl;
//	}
//	return 0;
//}