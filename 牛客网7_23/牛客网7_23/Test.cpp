#define _CRT_SECURE_NO_WARNINGS


//红与黑 
//#include<iostream>
//#include<vector>
//using namespace std;
//
////通过vector创建的二维数组进行递归调用，把已经走过的结点标记成'1',避免访问过的
////结点重复计数
//void BlackCount(vector<vector<char>>& v, int x, int y, int m, int n, int& count)
//{
//	//count通过引用的方式，正好递归调用进行计数
//	if (x<0 || y<0 || x >= m || y >= n || v[x][y] == '1' || v[x][y] == '#')
//		return;
//	count++;
//	v[x][y] = '1';
//	BlackCount(v, x - 1, y, m, n, count);
//	BlackCount(v, x, y - 1, m, n, count);
//	BlackCount(v, x + 1, y, m, n, count);
//	BlackCount(v, x, y + 1, m, n, count);
//}
//
//int main()
//{
//	int m, n;
//	while (cin >> m >> n)
//	{
//		int x, y;
//		int count = 0;
//		vector<vector<char>> v(m, vector<char>(n, 0));
//		for (size_t i = 0; i<m; i++)
//		{
//			for (size_t j = 0; j<n; j++)
//			{
//				cin >> v[i][j];
//				if (v[i][j] == '@')
//				{
//					x = i;//x标记起始i结点
//					y = j;//y表示起始j结点
//				}
//			}
//		}
//		BlackCount(v, x, y, m, n, count);
//		cout << count << endl;
//	}
//	return 0;
//}


//蘑菇阵

//要使用动态规划，注意每个点的概率来源，第一行的点，如(1,3)的概率来源只有它左边点(1,2)的1/2，
//第n行的点如(n,3)，概率来源为(n,2)+(n-1,3)*1/2，因为(n,2)只能往右走，概率为1。其他的特征点在程序段中列出
//#include <iostream>
//#include <iomanip>
//#include<cstring>
//using namespace std;
//int has[25][25];//有无蘑菇
//double dp[25][25];//能够到达每个格子的概率
//
//int main(){
//	int n, m, k;
//	while (cin >> n >> m >> k){
//		int i, j;
//		memset(has, 0, sizeof(has));
//		memset(dp, 0, sizeof(dp));
//		int x, y;
//		for (i = 0; i < k; ++i){
//			cin >> x >> y;
//			has[x][y] = 1;
//		}
//		for (i = 1; i <= n; ++i){
//			for (j = 1; j <= m; ++j){
//				if (i == 1 && j == 1) { dp[1][1] = 1; continue; }
//				if (has[i][j]) { dp[i][j] = 0; continue; }
//				if (i == n && j == m) { dp[i][j] = dp[i - 1][j] + dp[i][j - 1]; continue; }
//				if (i == n) { dp[i][j] = dp[i - 1][j] * 0.5 + dp[i][j - 1]; continue; }
//				if (j == m) { dp[i][j] = dp[i - 1][j] + dp[i][j - 1] * 0.5; continue; }
//				if (i == 1) { dp[i][j] = dp[i][j - 1] * 0.5; continue; }
//				if (j == 1) { dp[i][j] = dp[i - 1][j] * 0.5; continue; }
//				dp[i][j] = dp[i][j - 1] * 0.5 + dp[i - 1][j] * 0.5;
//			}
//		}
//		cout << fixed << setprecision(2) << dp[n][m] << endl;
//	}
//	return 0;
//}


//蘑菇阵解法二
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int main(){
//	int n, m, k;
//	while (scanf("%d%d%d", &n, &m, &k) != EOF){
//		vector<vector<int>> table((n + 1), vector<int>(m + 1));
//		vector<vector<double>> P((n + 1), vector<double>(m + 1));
//		int x, y;
//		for (int i = 0; i < k; i++){
//			scanf("%d%d", &x, &y);
//			table[x][y] = 1;
//		}
//		P[1][1] = 1.0;      //起点概率为1
//		for (int i = 1; i <= n; i++){
//			for (int j = 1; j <= m; j++){
//				if (!(i == 1 && j == 1)){      //跳过起点
//					P[i][j] = P[i - 1][j] * (j == m ? 1 : 0.5) + P[i][j - 1] * (i == n ? 1 : 0.5);   //边界的时候，概率为1
//					if (table[i][j] == 1) P[i][j] = 0;        //如果该点有蘑菇，概率置为0
//				}
//			}
//		}
//		printf("%.2lf\n", P[n][m]);
//	}
//}


#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M, K;
	while (cin >> N >> M >> K)
	{
		vector<vector<int>> vv((N + 1), vector<int>(M + 1,0));
		int x, y;
		for (int i = 0; i < K; ++i)
		{
			cin >> x >> y;
			vv[x][y] = 1;
		}
	}
	return 0;
}