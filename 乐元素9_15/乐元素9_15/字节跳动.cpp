#define _CRT_SECURE_NO_WARNINGS

//�ֽ�����������1 ������������������С��K����ϵĸ���
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


//�ļ����䣬һ���ļ����仨1���ӣ�֪���ļ����봫����е�ʱ�䣬֪���ļ��ĸ���
//���ļ����仨�ѵ���ʱ����ļ��������ۻ����ļ����Ϊ����
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

//�ǻ����˵�����������ͬʱȡ�������������㹻������������ȡ����������
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