#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		long long mul = 1;
//		for (int i = n; i > 0; --i)
//		{
//			mul *= i;
//		}
//		long int ret = 0;
//		while (mul)
//		{
//			ret = mul % 10;
//			if (ret != 0)
//				break;
//			else
//				mul /= 10;
//		}
//		cout << ret << endl;
//	}
//	return 0;
//}
//
//
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int DFS(int pos, vector<int>& v, vector<int>& book)
//{
//	vector<vector<int>> vv;
//	if (pos >= vv.size())
//	{
//		vv.push_back(v);
//	}
//	else{
//		for (int i = 0; i < vv.size(); ++i)
//		{
//			if (!book[i])
//			{
//				v[pos] = i + 1;
//				book[i] = 1;
//				DFS(pos + 1, v, book);
//				book[i] = 0;
//			}
//		}
//	}
//	return vv.size();
//}
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v(n);
//		vector<int> book(n, 0);
//		cout << DFS(0, v, book) << endl;
//	}
//}


//整数分解
//#include <iostream>
//using namespace std;
//
//#define MAX 20
//int p = 0;
//int res_num;
//int res[MAX];
//
//void resolve(int n, int min = 1);
//
//int main()
//{
//	int T;
//	while (cin >> T)
//	{
//		resolve(T, 1);
//		res_num = 0;
//	}
//	return 0;
//}
//
//void resolve(int n, int min)
//{
//	if (n <= 0)
//	{
//		for (int i = 0; i < p - 1; ++i)
//		{
//			cout << res[i] << "+";
//		}
//		cout << res[p - 1];
//		cout << endl;
//		res_num++;
//	}
//	for (int i = min; i <= n; ++i)
//	{
//		res[p] = i;
//		p++;
//		resolve(n - i, i);
//		p--;
//	}
//}