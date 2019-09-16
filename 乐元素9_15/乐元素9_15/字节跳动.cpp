#define _CRT_SECURE_NO_WARNINGS

//字节跳动笔试题1 求出数组中三个数相加小于K的组合的个数
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> vv(n);
//		for (int i = 0; i < n; ++i)
//			cin >> vv[i];
//		int K;
//		cin >> K;
//		int count = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = i + 1; j < n; ++j)
//			{
//				for (int p = j + 1; p < n; ++p)
//				{
//					if (vv[i] + vv[j] + vv[p] < K)
//						count++;
//				}
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}


//文件传输，一个文件传输花1秒钟，知道文件加入传输队列的时间，知道文件的个数
//求文件传输花费的总时间和文件队列中累积的文件最多为几个
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<vector<int>> vv(n, vector<int>(2));
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < 2; ++j)
//			{
//				cin >> vv[i][j];
//			}
//		}
//		int time = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			time += vv[i][1];
//		}
//		int sum = time - vv[n - 1][0] + 1;
//
//		cout << time + 1 << " " << sum << endl;
//	}
//	return 0;
//}

//智慧老人的试炼，两端同时取数，假设老人足够聪明，求你能取到数的最大和
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
//		vector<vector<int>> result(n + 1, vector<int>(n + 1, 0));
//		vector<vector<int>> sum(n + 1, vector<int>(n + 1, 0));
//
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> vv[i];
//			result[i][i] = vv[i];
//			sum[i][i] = vv[i];
//		}
//		for (int i = 0; i < n;++i)
//		for (int j = 0; j < n; ++j)
//		{
//			sum[i][j] += vv[i];
//		}
//		for (int i = n - 1; i >= 0; --i)
//		{
//			for (int j = i; j < n; ++j)
//			{
//				result[i][j] = sum[i][j] - min(result[i + 1][j], result[i][j - 1]);
//			}
//		}
//		cout << result[0][n - 1] << endl;
//	}
//	return 0;
//}