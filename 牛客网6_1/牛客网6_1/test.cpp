#define _CRT_SECURE_NO_WARNINGS

//两种排序方法
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
bool length(string& a, string& b)
{
	return a.size() < b.size();
}
bool dict(string& a, string& b)
{
	return a < b;
}

int main()
{
	int n;
	cin >> n;
	vector<string> vs, vl, vd;
	string str;
	for (int i = 0; i < n; ++i)
	{
		cin >> str;
		vs.push_back(str);
		vl.push_back(str);
		vd.push_back(str);
	}
	sort(vl.begin(), vl.end(), length);
	sort(vd.begin(), vd.end(), dict);
	if (vs == vl&&vs == vd)
		cout << "both" << endl;
	else if (vs == vl)
		cout << "lengths" << endl;
	else if (vs == vd)
		cout << "lexicographically" << endl;
	else
		cout << "none" << endl;
	return 0;
}


//最小公倍数
#include <iostream>
using namespace std;
int main()
{
	int A, B;
	cin >> A >> B;
	int C = A * B;
	int tmp;
	while (A)
	{
		tmp = A;
		A = B % A;
		B = tmp;
	}
	cout << C / B << endl;
	return 0;
}

//另类加法
class UnusualAdd {
public:
	int addAB(int A, int B) {
		int sum = 0, carry = 0;
		while (B != 0){
			//对应位的和
			sum = A^B;
			//对应位和的进位，既然是进位，就要整体左移一位
			carry = (A&B) << 1;
			A = sum;
			B = carry;
		}
		return sum;
	}
};


//求路径总和
#include<iostream>
using namespace std;
int pathNum(int n, int m)
{
	if (n > 1 && m > 1)
		//b情况，递归
		return pathNum(n - 1, m) + pathNum(n, m - 1);
	else if (((n >= 1) && (m == 1)) || ((n == 1) && (m >= 1)))
		// a情况，终止条件
		return n + m;
	else
		//格子为0时， 路径为0
		return 0;
}
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		cout << pathNum(n, m) << endl;
	}
	return 0;
}