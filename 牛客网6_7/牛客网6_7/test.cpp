#define _CRT_SECURE_NO_WARNINGS



//杨辉三角的变形
#include <iostream>

using namespace std;
int yanghui(int n, int k)
{
	if (k == 1 || k == 2 * n - 1)
		return 1;
	if (k < 1 || k > 2 * n - 1)
		return 0;
	else
		return yanghui(n - 1, k - 2) + yanghui(n - 1, k - 1) + yanghui(n - 1, k);
}
int main()
{
	int num;
	while (cin >> num)
	{
		for (int i = 1; i < 2 * num - 1; ++i)
		{
			if (yanghui(num, i) % 2 == 0)
				cout << i << endl;
			else if (i == 2 * num - 1)
				cout << -1 << endl;
		}
	}
	return 0;
}

//两个超长整数相加
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(void)
{
	string a, b, result;
	int carry = 0;
	while (cin >> a >> b)
	{
		const size_t n = a.size() > b.size() ? a.size() : b.size();
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		for (size_t i = 0; i < n; i++)
		{
			const int ai = i < a.size() ? a[i] - '0' : 0;
			const int bi = i < b.size() ? b[i] - '0' : 0;
			const int val = (ai + bi + carry) % 10;
			carry = (ai + bi + carry) / 10;
			result.insert(result.begin(), val + '0');
		}
		if (carry == 1)
			result.insert(result.begin(), '1');
		cout << result << endl;
		result.clear();
		carry = 0;
	}
	return 0;
}

//找出一个偶数等于相差最小的两个素数之和
#include <iostream>
#include <algorithm>

using namespace std;

bool IsPrime(int n)
{
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int num;
	int half;
	int i;
	while (cin >> num)
	{
		half = num / 2;
		//从中间向两边找
		for (i = half; i > 0; i--)
		{
			if (IsPrime(i) && IsPrime(num - i))
				break;
		}
		cout << i << endl << num - i << endl;
	}
	return 0;
}