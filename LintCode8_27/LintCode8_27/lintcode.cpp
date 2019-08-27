#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//��תһ����λ����
//class Solution {
//public:
//	/**
//	* @param number: A 3-digit number.
//	* @return: Reversed number.
//	*/
//	int reverseInteger(int number) {
//		// write your code here
//		string str = std::to_string(number);//to_string,������ת��Ϊstring���͵��ַ���
//		reverse(str.begin(), str.end());
//
//		return atoi(str.c_str());//���ַ���ת��Ϊ����int atoi(char* str)
//	}
//};

//��ת����
//�������޷������������
//class Solution {
//public:
//	/**
//	* @param n: the integer to be reversed
//	* @return: the reversed integer
//	*/
//	int reverseInteger(int n) {
//		// write your code here
//		bool flag = false;
//		if (n < 0)
//		{
//			n = -n;
//			flag = true;
//		}
//
//		string str = std::to_string(n);
//		reverse(str.begin(), str.end());
//		int ret = atoi(str.c_str());
//		if (ret > 0x7fffffff || ret < (signed int)0x80000000)
//			return 0;
//		else
//		{
//			if (flag == true)
//				return -ret;
//			else
//				return ret;
//		}
//		
//	}
//};
//

//��ȷ��𣬲������⴦��������������ͬ��˼·����
//class Solution {
//public:
//	/**
//	* @param n: the integer to be reversed
//	* @return: the reversed integer
//	*/
//	int reverseInteger(int n) {
//		// write your code here
//		int result = 0;
//		for (; n != 0; n /= 10)
//		{
//			int tmp = result * 10 + n % 10;
//			//�ж��Ƿ�����������������tmp������result10��
//			if (tmp / 10 != result)
//				return 0;
//			result = tmp;
//		}
//		return result;
//	}
//};

//int main()
//{
//	Solution s;
//	cout << s.reverseInteger(1534236469) << endl;
//	return 0;
//}


//쳲���������
//class Solution {
//public:
//	/**
//	* @param n: an integer
//	* @return: an ineger f(n)
//	*/
//	int fibonacci(int n) {
//		// write your code here
//		if (n <= 1)
//			return 0;
//		if (n == 2)
//			return 1;
//		int f1 = 0, f2 = 1;
//		int fn = 0;
//		for (int i = 3; i <= n; ++i)
//		{
//			fn = f1 + f2;
//			f1 = f2;
//			f2 = fn;
//		}
//		return fn;
//	}
//};

//�����������ڵ�
//class Solution {
//public:
//	/*
//	* @param root: the root of tree
//	* @return: the max node
//	*/
//	TreeNode* _tree(TreeNode* node1, TreeNode* node2)
//	{
//		if (node1 == NULL)
//			return node2;
//		if (node2 == NULL)
//			return node1;
//		if (node1->val > node2->val)
//			return node1;
//		else
//			return node2;
//	}
//
//	TreeNode * maxNode(TreeNode * root) {
//		// write your code here
//		if (root == NULL)
//			return root;
//		TreeNode* left = maxNode(root->left);
//		TreeNode* right = maxNode(root->right);
//
//		return _tree(root, _tree(left, right));
//	}
//};
//


//��Ŀ����
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	while (cin >> N >> M)
//	{
//		vector<vector<int>> Vec(N, vector<int>(M, 0));
//		for (int i = 0; i < N; ++i)
//		{
//			for (int j = 0; j < M; ++j)
//			{
//				cin >> Vec[i][j];
//			}
//		}
//		int tmp = Vec[0][0];
//		int result = 0;
//		for (int i = 0; i < M; i++)
//		{
//			tmp = 0;
//			for (int j = 0; j < N; j++)
//			{
//				if (tmp < Vec[j][i])
//					tmp = Vec[j][i];
//			}
//			result += tmp;
//		}
//		cout << result << endl;
//	}
//	return 0;
//}