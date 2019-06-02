#define _CRT_SECURE_NO_WARNINGS

//路径总和递归求解
#include <iostream>
using namespace std;

int PathNum1(int n, int m)
{
	if (n > 1 && m > 1)
		return PathNum1(n - 1, m) + PathNum1(n, m - 1);
	else if ((n >= 1 && m == 1) || (n == 1 && m >= 1))
		return n + m;
	else
		return 0;
}
int PathNum2(int n, int m)
{
	if (n == 0 || m == 0)
		return 1;
	else
		return PathNum2(n - 1, m) + PathNum2(n, m - 1);
}
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		int path = PathNum1(n, m);
		cout << path << endl;
	}
	return 0;
}

//路径总和动态规划求解

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int m, n;
	while (cin >> m >> n) {
		vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= m; j++) {
				if (i == 0 && j == 0) {
					dp[i][j] = 1;
					continue;
				}
				if (i == 0) {    // 上边界
					dp[i][j] = dp[i][j - 1];
				}
				else if (j == 0) {    // 左边界
					dp[i][j] = dp[i - 1][j];
				}
				else {
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
				}
			}
		}
		cout << dp[n][m] << endl;
	}

	return 0;
}
