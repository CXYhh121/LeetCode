#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



//左右两端最大值的最大差
//class MaxGap {
//public:
//	int findMaxGap(vector<int> A, int n) {
//		// write code here
//		int max = A[0], min;
//		for (size_t i = 0; i < A.size(); ++i)
//		{
//			if (A[i] > max)
//				max = A[i];
//		}
//		min = A[0] > A[n - 1] ? A[n - 1] : A[0];
//		return max - min;
//	}
//};
//
//int main()
//{
//	vector<int> A{2,4,1,8,6,10,9};
//	MaxGap mg;
//	cout << mg.findMaxGap(A, A.size()) << endl;
//	
//	return 0;
//}



//顺时针打印矩阵
//class Printer {
//public:
//	vector<int> clockwisePrint(vector<vector<int> > mat, int n, int m) {
//		// write code here
//		vector<int>ans;
//		int order[4][2] = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };//方向数组
//		int i = 0, j = -1, start = 0;
//		while (1){
//			int a = i + order[start][0], b = j + order[start][1];
//			if (!(0 <= a&&a<n) || !(0 <= b&&b<m) || mat[a][b] == INT_MAX)
//				start = (start + 1) % 4;
//			i = i + order[start][0], j = j + order[start][1];
//			ans.push_back(mat[i][j]);
//			mat[i][j] = INT_MAX;
//			if (ans.size() == n*m)
//				break;
//		}
//		return ans;
//	}
//};