#define _CRT_SECURE_NO_WARNINGS


//����� 
//#include<iostream>
//#include<vector>
//using namespace std;
//
////ͨ��vector�����Ķ�ά������еݹ���ã����Ѿ��߹��Ľ���ǳ�'1',������ʹ���
////����ظ�����
//void BlackCount(vector<vector<char>>& v, int x, int y, int m, int n, int& count)
//{
//	//countͨ�����õķ�ʽ�����õݹ���ý��м���
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
//					x = i;//x�����ʼi���
//					y = j;//y��ʾ��ʼj���
//				}
//			}
//		}
//		BlackCount(v, x, y, m, n, count);
//		cout << count << endl;
//	}
//	return 0;
//}


//Ģ����

//Ҫʹ�ö�̬�滮��ע��ÿ����ĸ�����Դ����һ�еĵ㣬��(1,3)�ĸ�����Դֻ������ߵ�(1,2)��1/2��
//��n�еĵ���(n,3)��������ԴΪ(n,2)+(n-1,3)*1/2����Ϊ(n,2)ֻ�������ߣ�����Ϊ1���������������ڳ�������г�
//#include <iostream>
//#include <iomanip>
//#include<cstring>
//using namespace std;
//int has[25][25];//����Ģ��
//double dp[25][25];//�ܹ�����ÿ�����ӵĸ���
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


//Ģ����ⷨ��
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
//		P[1][1] = 1.0;      //������Ϊ1
//		for (int i = 1; i <= n; i++){
//			for (int j = 1; j <= m; j++){
//				if (!(i == 1 && j == 1)){      //�������
//					P[i][j] = P[i - 1][j] * (j == m ? 1 : 0.5) + P[i][j - 1] * (i == n ? 1 : 0.5);   //�߽��ʱ�򣬸���Ϊ1
//					if (table[i][j] == 1) P[i][j] = 0;        //����õ���Ģ����������Ϊ0
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