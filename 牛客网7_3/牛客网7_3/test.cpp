#define _CRT_SECURE_NO_WARNINGS

//���ӷ���
//����ѧ�⣬˼·��ǰ���˵�˼·��̫һ�������ý����ӣ�ֱ�Ӹ���������������⣬��������Ҫ����X����
//��һ�ξ�����Ŀ�Ĵ���ʣ��������ĿΪ��4 / 5(X - 1) = (4 / 5)*X - (4 / 5)��
//�ڶ���ʣ�����Ӹ���Ϊ��4 / 5(4 / 5(X - 1) - 1) = ((4 / 5) ^ 2)*X - (4 / 5) ^ 2 - (4 / 5)��
//������ʣ�����Ӹ���Ϊ��4 / 5(4 / 5(4 / 5(X - 1) - 1) - 1) = ((4 / 5) ^ 3)*X - (4 / 5) ^ 3 - (4 / 5) ^ 2 - (4 / 5)��
//......
//�������ƣ�����nֻ���ӵ����ƴ���ʣ��������Ϊ��
//4 / 5(4 / 5(4 / 5(....(4 / 5(X - 1)...) - 1) - 1) - 1) = ((4 / 5) ^ n)*X) - (4 / 5) ^ n - (4 / 5) ^ (n - 1) - ... - (4 / 5)
//= ((4 / 5) ^ n)*X) - 4[1 - (4 / 5) ^ n]
//= (X + 4)*(4 / 5) ^ n - 4
//��ˣ�ͬǰ�˵��Ƶ�һ�£����գ�ֻ��Ҫ����x + 4��ֵΪ5 ^ n�η�����Ա�֤����ܵõ�һ��������������Ŀ��Ҫ����ˣ��������£�
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

//������̨��
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

//��̬��̨��
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