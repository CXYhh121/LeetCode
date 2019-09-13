#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<vector<int>> grid(n,vector<int>(n));
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin >> grid[i][j];
			}
		}
		for (int i = 0; i < n;++i)
			for (int j = 0; j < n; ++j)
				if (grid[i][j] < 0)
					++count;
		int sum = grid[0][0];
		int value = grid[0][0];
		if (count != n*n)
		{
			sum = 0;
			for (int i = 0; i < n; ++i)
				for (int j = 0; j < n; ++j)
				{
					if (grid[i][j] > 0)
						sum += grid[i][j];
				}
		}
		else
		{
			vector<vector<int>> result(grid);
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					value = max(result[i][j], result[i][j] + grid[i][j]);
					sum = max(value, sum);
				}
			}
		}

		cout << sum << endl;
	}
	return 0;
}