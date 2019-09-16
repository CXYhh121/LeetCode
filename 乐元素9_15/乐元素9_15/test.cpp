#define _CRT_SECURE_NO_WARNINGS
//判断n位数每一位上都不同数的个数
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool Isdifferent(int num)
//{
//	vector<int> vv;
//	while (num)
//	{
//		int value = num % 10;
//		vv.push_back(value);
//		num /= 10;
//	}
//	for (int i = 0; i < vv.size(); ++i)
//	for (int j = i + 1; j < vv.size(); ++j)
//	if (vv[i] == vv[j])
//		return false;
//	return true;
//}
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int count = 0;
//		for (int i = pow(10, n - 1); i < pow(10, n); ++i)
//		{
//			if (Isdifferent(i) == true)
//				count++;
//		}
//		cout << count << endl;
//	}
//}


//判断一个数组是否能够分成两个相加之和相同的子数组
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> vv(n);
//		int sum = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> vv[i];
//			sum += vv[i];
//		}
//		vector<vector<int>> result(n + 1, vector<int>(sum / 2 + 1, 0));
//		for (int i = 0; i <= n; ++i)
//		{
//			for (int j = 1; j <= sum / 2; ++j)
//			{
//				if (j >= vv[i - 1])
//					result[i][j] = max(result[i - 1][j], result[i - 1][j] + vv[i]);
//				else
//					result[i][j] = result[i - 1][j];
//			}
//		}
//		bool flag = (sum - 2 * result[n][sum / 2] == 0);
//		if (flag)
//			cout << "true" << endl;
//		else
//			cout << "false" << endl;
//	}
//	return 0;
//}

//不使用加减乘除求两个数的和
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	while (cin >> a >> b)
//	{
//		while (b != 0)
//		{
//			int tmp = a ^ b;
//			b = (a&b) << 1;
//			a = tmp;
//		}
//		cout << a << endl;
//	}
//	return 0;
//}



//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
struct node
{
	int x;
	int y;
	node(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

int BFS(vector<vector<int>>& grid, int startx, int starty, int destx, int desty, int& count)
{
	int row = grid.size();
	int col = grid[0].size();
	queue<node> nq;
	bool flag = false;
	vector<vector<int>> book(row, vector<int>(col, 0));
	nq.push(node(startx, starty));
	book[startx][starty] = 1;

	int nextpos[4][2] = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };
	while (!nq.empty())
	{
		for (int k = 0; k < 4; ++k)
		{
			int p = nq.front().x + nextpos[k][0];
			int q = nq.front().y + nextpos[k][1];
			//若是该位置不符合条件继续搜索其他位置
			if (p >= row || p < 0 || q >= col || q < 0)
				continue;
			//如果该位置没有障碍，且该位置没有被走过就可以走，保存该位置
			if (grid[p][q] == 0 && book[p][q] == 0)
			{
				nq.push(node(p, q));
				//标志该位置已经走过
				book[p][q] = 1;
				count++;
			}
			//如果该位置为目标位置，就可以走出循环
			if (p == destx && q == desty)
			{
				flag = true;
				break;
			}
		}
		if (flag = true)
			break;
		nq.pop();
	}
	return count;
}

int main()
{
	int x, y, n;
	while (cin >> x >> y >> n)
	{
		vector<vector<int>> grid(n, vector<int>(n, 0));
		for (int i = 0; i < n; ++i)
		{
			int p, q;
			cin >> p >> q;
			grid[p][q] = 1;
		}
		int count = 0;
		BFS(grid, 0, 0, x, y, count);
		cout << count << endl;
	}
	return 0;
}