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
//	//״̬���̣���i����Ʒ�ܷ�Ž�������ʱ������ 
    //�Ž�ȥ��Fv[j] = F[j - A[i]] + A[i]
    //���Ž�ȥ��Fv[j] = F[j]
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
//			//�Ӻ���ǰ���£�����Ḳ��֮ǰ������
//			for (int j = M - 1; j > 0; j--)
//			{
//				//����i����Ʒ���ܷŽ�ȥ���ҷŽ�ȥ�Ͳ��Ž�ȥ������������Ǹ�
//				//�Ž�ȥ�����Ǽ�ȥ��i����Ʒ��С֮����Fv�ж�Ӧλ�õ��������ϵ�i����Ʒ������
//				//���Ž�ȥ����һά�����λ�õ�����
//				if (A[i] < j)
//					Fv[j] = max(Fv[j], Fv[j - A[i]] + A[i]);
//				else
//					//�Ų���ȥ���Ǹ�λ�õ�����
//					Fv[j] = Fv[j];
//			}
//		}
//		return Fv[m];
//	}
//};



//leetcode backpack II
/*
//״̬��F(i,j) ����i����Ʒװ�����Ϊj�ĵı�����
���Ʒ��̣�
	�����������1.��i����Ʒ�Ĵ�С���ڵ�ǰ������װ����Ʒ�Ĵ�С���Ų��£�
	��ʱ��i����Ʒ����ֵ������i - 1��Ʒʱ��ͬ F(i,j) = F(i-1,j)
	2.��i����Ʒ��СС�ڵ�ǰ������װ����Ʒ��С����ʱ�ַ�Ϊ
		���������1.�ŵ��²��Ÿ���Ʒ����ʱ�͵�һ�����һ��F(i,j) = F(i-1,j)
		2.�ŵ����ҷŽ�ȥ����ʱ�����i����Ʒ�ļ�ֵ���ڷ���i-1����Ʒ��ֵ����i��Ʒ��Ӧ�ļ�ֵ
		���ұ����Ĵ�С�����ȥ��i����Ʒ��Ӧ�Ĵ�С F(i,j) = F(i - 1,j - A[i] + V[i])
	��ʱ����ȡ������������д��һ�� max(F(i-1,j),F(i-1,j-A[i]+V[i]))
��ʼ����
	��1�к͵�1�е�ֵ��Ϊ0����Ϊδ������ƷF(i,0) = F(0,j) = 0
����ֵ��
	���ؽ�n����Ʒ�����СΪm�ı�����
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
//      ����һ��һ���Է����ʼ��
//		int N = A.size() + 1;
//		int M = m + 1;
//		
//		������ֵ�ȳ�ʼ��Ϊ0��������һ�е�һ��
//		vector<vector<int>> Fv(N, vector<int>(M, 0));
//
//		for (int i = 1; i < N; ++i)
//		{
//			for (int j = 1; j < M; ++j)
//			{
//				//����i����Ʒװ���±���ʱ����ֵ��֮ǰ�����
//				if (A[i - 1] > j)
//					Fv[i][j] = Fv[i - 1][j];
//				//װ����ʱ����װ��װ��ѡȡ�����ֵ
//				else
//				{
//					//����ܹ��Ž��������Ǿ��ڷŽ�ȥ�Ͳ��Ž�ȥ����һ����ֵ�����һ��
//					//���Ž�ȥ��ֵ��֮ǰ��λ�õ�ֵ���
//					//�Ž�ȥ�����ڼ�ȥi��Ӧ��С���Ӧλ���ϵļ�ֵ���ϵ�i����Ʒ��Ӧ�ļ�ֵ
//					Fv[i][j] = max(Fv[i - 1][j], Fv[i - 1][j - A[i - 1]] + V[i - 1]);
//				}
//			}
//		}
//		return Fv[N - 1][m];
//	}
//};


//����i����Ʒװ�����Ϊj�ĵı�����
//������������������ʱֻ��Ҫȥ�÷ŵ�i-1����Ʒʱȡ�õ�����ֵ
//������ǽ���ά�ռ��Ż�Ϊһά�ռ�,�����ǰ����������һά���飬
//������ʹ��ǰ������ʱ֮ǰ�ľ��Ѿ�������
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
//				//�����i����Ʒ�Ų�����������ֵ��֮ǰһά�����и�λ�õ�ֵ���
//				if (A[i] > j)
//					Fv[j] = Fv[j];
//				else
//				{
//					//����ܹ��Ž��������Ǿ��ڷŽ�ȥ�Ͳ��Ž�ȥ����һ����ֵ�����һ��
//					//���Ž�ȥ��ֵ��֮ǰ��λ�õ�ֵ���
//					//�Ž�ȥ�����ڼ�ȥi��Ӧ��С���Ӧλ���ϵļ�ֵ���ϵ�i����Ʒ��Ӧ�ļ�ֵ
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