#define _CRT_SECURE_NO_WARNINGS
//��һ��ż�����������������������֮��
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


//�����������
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

//�������������
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
		// n����32�ξͱ�Ϊ0
		while (n)
		{
			//��ȡ��ǰλ�Ķ�����ֵ
			if (n & 1)
			{
				//���1��ֵ�����������ۼӣ����Ҹ���������
				++count;
				maxCount = max(count, maxCount);
			}
			else
			{
				//���1��ֵ�������������ۼ�
				count = 0;
			}
			//����һ�Σ�Ϊ��ȡ��һλ������ֵ��׼��
			n = n >> 1;
		}
		cout << maxCount << endl;
	}
	return 0;
}
//�жϾ�������Ӯ
#include <iostream>
#include <vector>

using namespace std;
class Board {
public:
	bool checkWon(vector<vector<int> > board) {
		int row = board.size();
		//���ÿһ�еĺ����Ƿ����row
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
		//���ÿһ�еĺ����Ƿ����row
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
		//������Խ��ߵĺ����Ƿ����row
		sum = 0; for (i = 0; i<row; i++)
		{
			sum += board[i][i];
		}
		if (sum == row)
			return true;
		//��鸱�Խ��ߵĺ����Ƿ����row
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