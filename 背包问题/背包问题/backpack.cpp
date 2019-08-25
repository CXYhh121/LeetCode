#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//leetcode backpack I

//class Solution {
//public:
//	/**
//	* @param m: An integer m denotes the size of a backpack
//	* @param A: Given n items with size A[i]
//	* @return: The maximum size
//	*/
//	//状态方程：第i个物品能否放进背包此时的质量 
    //放进去：Fv[j] = F[j - A[i]] + A[i]
    //不放进去：Fv[j] = F[j]
//
//	int backPack(int m, vector<int> &A) {
//		// write your code here
//		if (m < 1 || A.empty())
//			return 0;
//		int N = A.size();
//		int M = m + 1;
//
//		vector<int> Fv(M, 0);
//		for (int i = 0; i < N; i++)
//		{
//			//从后往前更新，否则会覆盖之前的数据
//			for (int j = M - 1; j > 0; j--)
//			{
//				//若第i件物品若能放进去，找放进去和不放进去中质量更大的那个
//				//放进去，就是减去第i件物品大小之后，在Fv中对应位置的质量加上第i件物品的重量
//				//不放进去就是一维数组该位置的质量
//				if (A[i] < j)
//					Fv[j] = max(Fv[j], Fv[j - A[i]] + A[i]);
//				else
//					//放不进去就是该位置的质量
//					Fv[j] = Fv[j];
//			}
//		}
//		return Fv[m];
//	}
//};



//leetcode backpack II
/*
//状态：F(i,j) 将第i个物品装入体积为j的的背包中
递推方程：
	分两种情况：1.第i个物品的大小大于当前背包能装入物品的大小，放不下，
	此时第i个物品最大价值与放入第i - 1物品时相同 F(i,j) = F(i-1,j)
	2.第i个物品大小小于当前背包能装入物品大小，此时又分为
		两种情况：1.放的下不放该物品，此时和第一种情况一样F(i,j) = F(i-1,j)
		2.放的下且放进去，此时放入第i个物品的价值等于放入i-1个物品价值加上i物品对应的价值
		并且背包的大小必须减去第i个物品对应的大小 F(i,j) = F(i - 1,j - A[i] + V[i])
	此时必须取上述两种情况中大的一个 max(F(i-1,j),F(i-1,j-A[i]+V[i]))
初始化：
	第1行和第1列的值都为0，因为未放置物品F(i,0) = F(0,j) = 0
返回值：
	返回将n个物品放入大小为m的背包中
	F[n][m]
*/



//class Solution {
//public:
//	/**
//	* @param m: An integer m denotes the size of a backpack
//	* @param A: Given n items with size A[i]
//	* @param V: Given n items with value V[i]
//	* @return: The maximum value
//	*/
//	
//	int backPackII(int m, vector<int> &A, vector<int> &V) {
//		// write your code here
//		if (A.empty() || V.empty() || m < 1)
//			return 0;
//
//      增加一行一列以方便初始化
//		int N = A.size() + 1;
//		int M = m + 1;
//		
//		将所有值先初始化为0，包括第一行第一列
//		vector<vector<int>> Fv(N, vector<int>(M, 0));
//
//		for (int i = 1; i < N; ++i)
//		{
//			for (int j = 1; j < M; ++j)
//			{
//				//当第i个物品装不下背包时，价值与之前的相等
//				if (A[i - 1] > j)
//					Fv[i][j] = Fv[i - 1][j];
//				//装的下时，在装不装中选取更大的值
//				else
//				{
//					//如果能够放进背包，那就在放进去和不放进去中找一个价值更大的一个
//					//不放进去价值和之前该位置的值相等
//					//放进去，等于减去i对应大小后对应位置上的价值加上第i个物品对应的价值
//					Fv[i][j] = max(Fv[i - 1][j], Fv[i - 1][j - A[i - 1]] + V[i - 1]);
//				}
//			}
//		}
//		return Fv[N - 1][m];
//	}
//};


//将第i个物品装入体积为j的的背包中
//由于我们求上述问题时只需要去得放第i-1个物品时取得的最大价值
//因此我们将二维空间优化为一维空间,必须从前往后更新这个一维数组，
//否则在使用前面数据时之前的就已经被覆盖
//class Solution {
//public:
//	int backPackII(int m, vector<int> &A, vector<int> &V) {
//		// write your code here
//		if (A.empty() || V.empty() || m < 1)
//			return 0;
//
//		int N = A.size();
//		int M = m + 1;
//
//		vector<int> Fv(M, 0);
//		for (int i = 0; i < N; ++i)
//		{
//			for (int j = M - 1; j > 0; j--)
//			{
//				//如果第i个物品放不进背包，价值与之前一维数组中该位置的值相等
//				if (A[i] > j)
//					Fv[j] = Fv[j];
//				else
//				{
//					//如果能够放进背包，那就在放进去和不放进去中找一个价值更大的一个
//					//不放进去价值和之前该位置的值相等
//					//放进去，等于减去i对应大小后对应位置上的价值加上第i个物品对应的价值
//					Fv[j] = max(Fv[j], Fv[j - A[i]] + V[i]);
//				}
//			}
//		}
//		return Fv[m];
//
//	}
//};
//
//int main()
//{
//	int m;
//	while (cin >> m)
//	{
//		vector<int> A(m);
//		vector<int> V(m);
//		for (int i = 0; i < 4; i++)
//			cin >> A[i];
//		for (int i = 0; i < 4; i++)
//			cin >> V[i];
//
//		Solution s;
//		cout << s.backPackII(m, A, V) << endl;
//	}
//	return 0;
//}