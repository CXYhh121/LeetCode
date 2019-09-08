#define _CRT_SECURE_NO_WARNINGS

//服务器数据转发
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int k, n;
	while (cin >> k >> n)
	{
		vector<vector<int>> resv;
		resv.resize(n);
		int col = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> col;
			resv[i].resize(col);
			for (int j = 0; j < col; ++j)
			{
				cin >> resv[i][j];
			}
		}
		int time = 0;
		
	}
}
