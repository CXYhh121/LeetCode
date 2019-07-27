#define _CRT_SECURE_NO_WARNINGS


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		vector<int> v(num);
//		vector<int> cur;
//		vector<int> res;
//
//		for (int i = 0; i < num; i++)
//			cin >> v[i];
//		for(size_t i = 0; i < v.size(); i++)
//		{
//			for (size_t j = 0; j < v.size() - 1; j++)
//			{
//				cur.push_back(v[j]);
//				if (v[j + 1] > v[j])
//					cur.push_back(v[j + 1]);
//				else
//					continue;
//			}
//			if (cur.size() > res.size())
//				res = cur;
//		}
//		cout << res.size() << endl;
//	}
//	return 0;
//}




//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v({ 0, 0, 1 });
//	v.resize(21);
//	for (size_t i = 3; i < v.size(); i++)
//		v[i] = (i - 1)*(v[i - 1] + v[i - 2]);
//	int num;
//	while (cin >> num)
//	{
//		cout << v[num] << endl;
//	}
//	return 0;
//}




// write your code here cpp
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#define N 1001
using namespace std;
int main()
{
	int n;
	while (cin >> n){
		int a[N];//这个是干什么的呢？？？没错，他就是存
		int maxLen[N];//这个有什么 用呢，，，，，
		//首先这个运用，递推，动规的思想，求最后一个的最长子序列，这个数组存的是到达每个数的
		//最长子序列，ps:除了第一个数
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			maxLen[i] = 1;//默认每个初始化为1，其实我感觉0也可以，不过有的地方需要改下，稍微麻烦了点
			//喜欢的可以自己试试，ps:用0的话就是你自己写出来的了，而不是借鉴别人的了
		}
		for (int i = 2; i <= n; i++)
		{
			for (int j = 1; j<i; j++)
			if (a[i]>a[j])
				maxLen[i] = max(maxLen[i], maxLen[j] + 1);
			//这里max函数用的 不是很熟练，
		}
		cout << *max_element(maxLen + 1, maxLen + n + 1) << endl;
	}
}