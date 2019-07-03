#define _CRT_SECURE_NO_WARNINGS

//猴子分桃
//纯数学题，思路与前面人的思路不太一样，不用借桃子，直接根据题意来进行求解，设最少需要桃子X个：
//第一次经过题目的处理剩余桃子数目为：4 / 5(X - 1) = (4 / 5)*X - (4 / 5)；
//第二次剩余桃子个数为：4 / 5(4 / 5(X - 1) - 1) = ((4 / 5) ^ 2)*X - (4 / 5) ^ 2 - (4 / 5)；
//第三次剩余桃子个数为：4 / 5(4 / 5(4 / 5(X - 1) - 1) - 1) = ((4 / 5) ^ 3)*X - (4 / 5) ^ 3 - (4 / 5) ^ 2 - (4 / 5)；
//......
//依次类推，经过n只猴子的类似处理，剩余桃子数为：
//4 / 5(4 / 5(4 / 5(....(4 / 5(X - 1)...) - 1) - 1) - 1) = ((4 / 5) ^ n)*X) - (4 / 5) ^ n - (4 / 5) ^ (n - 1) - ... - (4 / 5)
//= ((4 / 5) ^ n)*X) - 4[1 - (4 / 5) ^ n]
//= (X + 4)*(4 / 5) ^ n - 4
//因此，同前人的推导一致，最终，只需要满足x + 4的值为5 ^ n次方则可以保证最后能得到一个整数，满足题目的要求，因此，代码如下：
#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	while (cin >> n && n > 0)
	{
		cout << (long)pow(5, n) - 4 << " " << (long)pow(4, n) + n - 4 << endl;
	}
	return 0;
}

//青蛙跳台阶
class Solution {
public:
	int jumpFloor(int number) {
		if (number == 0)
			return 0;
		if (number == 1)
			return 1;
		int fn1 = 1, fn2 = 1;
		int fn;
		for (int i = 2; i <= number; ++i)
		{
			fn = fn1 + fn2;
			fn2 = fn1;
			fn1 = fn;
		}
		return fn;
	}
};

//变态跳台阶
class Solution {
public:
	int jumpFloorII(int number) {
		if (number == 0)
			return 0;
		if (number == 1)
			return 1;
		return 2 * jumpFloorII(number - 1);
	}
};