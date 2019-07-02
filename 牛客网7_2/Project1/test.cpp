#define _CRT_SECURE_NO_WARNINGS


//三角形
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	while (cin >> a >> b >> c)
	{
		if (a + b <= c || a + c <= b || b + c <= a)
			cout << "No" << endl;
		else if (a - b >= c || b - c >= a || a - c >= b)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}

//不带加减乘除的加法
class Solution {
public:
	int Add(int num1, int num2)
	{
		while (num2 != 0)
		{
			int sum = num1 ^ num2;
			int carry = (num1&num2) << 1;
			num1 = sum;
			num2 = carry;
		}
		return num1;
	}
};


//青蛙跳台阶、变态跳台阶
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