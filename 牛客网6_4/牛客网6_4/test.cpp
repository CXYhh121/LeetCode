#define _CRT_SECURE_NO_WARNINGS
//求一个偶数等于哪两个最相近的素数之和
#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;
bool isPrimeNum(int num)
{
	for (int i = 2; i <= sqrt(num); ++i)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int N;
	while (cin >> N)
	{
		int left = N / 2 - 1;
		int right = N / 2 + 1;
		while (!isPrimeNum(left) || !isPrimeNum(right))
		{
			left--;
			right++;
		}
		cout << left << endl;
		cout << right << endl;
	}
}


//最近公共祖先
class LCA {
public:
	int getLCA(int a, int b) {
		while (a != b)
		{
			if (a > b)
				a /= 2;
			else
				b /= 2;
		}
		return a;
	}
};

//最大连续比特数
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0, maxCount = 0;
		// n右移32次就变为0
		while (n)
		{
			//获取当前位的二进制值
			if (n & 1)
			{
				//如果1的值连续，计数累加，并且跟新最大计数
				++count;
				maxCount = max(count, maxCount);
			}
			else
			{
				//如果1的值不连续，重新累加
				count = 0;
			}
			//右移一次，为获取下一位二进制值做准备
			n = n >> 1;
		}
		cout << maxCount << endl;
	}
	return 0;
}
//判断井字棋输赢
#include <iostream>
#include <vector>

using namespace std;
class Board {
public:
	bool checkWon(vector<vector<int> > board) {
		int row = board.size();
		//检查每一行的和是是否等于row
		int i, j, sum;
		for (i = 0; i<row; i++)
		{
			sum = 0;
			for (j = 0; j<row; j++)
			{
				sum += board[i][j];
			}
			if (sum == row)
				return true;
		}
		//检查每一列的和是是否等于row
		for (i = 0; i<row; i++)
		{
			sum = 0;
			for (j = 0; j<row; j++)
			{
				sum += board[j][i];
			}
			if (sum == row)
				return true;
		}
		//检查主对角线的和是是否等于row
		sum = 0; for (i = 0; i<row; i++)
		{
			sum += board[i][i];
		}
		if (sum == row)
			return true;
		//检查副对角线的和是是否等于row
		sum = 0;
		for (i = 0; i<row; i++)
		{
			sum += board[i][row - i - 1];
		}
		if (sum == row)
			return true;
		return false;
	}
};