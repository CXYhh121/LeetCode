#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	vector<string> v;
//	while (cin >> n)
//	{
//		string str;
//		while (n--)
//		{
//			cin >> str;
//			v.push_back(str);
//		}
//
//		for (size_t i = 0; i < v.size(); i++)
//		{
//			if (v[i].find(',') == string::npos)
//				cout << v[i];
//			else
//				cout << '\"' << v[i] << '\"';
//		}
//		cout << endl;
//	}
//}



//收件人列表
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		cin.get();
//		string name;
//		for (int i = 0; i<n; i++)
//		{
//			getline(cin, name);
//			if (i != n - 1)
//			{
//				if (name.find(',') != -1 || name.find(' ') != -1)
//					cout << '\"' << name << '\"' << ',' << ' ';
//				else
//					cout << name << ',' << ' ';
//			}
//			else
//			{
//				if (name.find(',') != -1 || name.find(' ') != -1)
//					cout << '\"' << name << '\"' << endl;
//				else
//					cout << name << endl;
//			}
//		}
//	}
//	return 0;
//}


//养兔子
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int> v{ 1, 2 };
//	v.resize(90);
//	for (size_t i = 2; i < v.size(); ++i)
//	{
//		v[i] = v[i - 1] + v[i - 2];
//	}
//
//	int n;
//	while (cin >> n)
//	{
//		cout << v[n - 1] << endl;
//	}
//	return 0;
//
//}