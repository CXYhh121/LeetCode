#define _CRT_SECURE_NO_WARNINGS

//ƒÍ÷’Ω±
class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		// write code here
		for (int i = 1; i < 6; i++)
		{
			board[0][i] += board[0][i - 1];
			board[i][0] += board[i - 1][0];
		}
		for (int i = 1; i < 6; i++)
		{
			for (int j = 1; j < 6; ++j)
			{
				board[i][j] += board[i - 1][j] > board[i][j - 1] ? board[i - 1][j] : board[i][j - 1];
			}
		}
		return board[5][5];
	}
};


//√‘π¨Œ Ã‚
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int M, N;
	while (cin >> M >> N)
	{
		vector<vector<int>> vv(M, vector<int>(N));
		for (int i = 0; i < M; ++i)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> vv[i][j];
			}
		}
		for (int i = 0; i < M; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				if (vv[i][j] == 0)
					cout << '(' << i << ',' << j << ')' << endl;
			}
		}
	}
	return 0;
}