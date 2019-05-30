#define _CRT_SECURE_NO_WARNINGS

//斐波那契数列
//#include <iostream>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//	int f0 = 0, f1 = 1;
//	while (N > f1)
//	{
//		int tmp = f0;
//		f0 = f1;
//		f1 = tmp + f1;
//	}
//	cout << min(f1 - N, N - f0) << endl;
//}

//合法括号序列解法一
//class Parenthesis {
//public:
//	bool chkParenthesis(string A, int n) {
//		// write code here
//		if (n % 2 != 0)
//			return false;
//		int left = 0;
//		int right = 0;
//		int num = 0;
//		for (size_t i = 0; i < n; ++i)
//		{
//			if (A[i] == '(')
//				left++;
//			else if (A[i] == ')')
//				right++;
//			else
//				return false;
//			num = left - right;
//			if (num < 0)
//				return false;
//		}
//		return num == 0;
//	}
//};

//解法二,通过栈实现
//#include <iostream>
//#include <stack>
//
//using namespace std;
//class Parenthesis {
//public:
//	bool chkParenthesis(string A, int n) {
//		// write code here
//		stack<char> sc;
//		for (auto ele : A) {
//			switch (ele) {
//			case '(':
//				sc.push(ele);
//				break;
//			case ')':
//			{
//						if (sc.empty() || sc.top() != '(')
//							return false;
//						else
//							sc.pop(); }
//				break;
//			default:
//				return false;
//			}
//		}
//		return true;
//	}
//};




///////////////add.h/////////////////
//#ifndef __ADD_H__
//#define __ADD_H__
//int add(int a, int b);
//#endif // __ADD_H__
///////////////add.c/////////////////
//#include "add.h"
//int add(int a, int b)
//{
//	return a + b;
//}
///////////////sub.h/////////////////
//#ifndef __SUB_H__
//#define __SUB_H__
//int sub(int a, int b);
//#endif // __SUB_H__
///////////////add.c/////////////////
//#include "add.h"
//int sub(int a, int b)
//{
//	return a - b;
//}
/////////////main.c////////////////
//#include <stdio.h>
//#include "add.h"
//#include "sub.h"
//
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	printf("add(10, 20)=%d\n", a, b, add(a, b));
//	a = 100;
//	b = 20;
//	printf("sub(%d,%d)=%d\n", a, b, sub(a, b));
//}