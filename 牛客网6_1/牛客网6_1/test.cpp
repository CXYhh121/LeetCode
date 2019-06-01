#define _CRT_SECURE_NO_WARNINGS

//�������򷽷�
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


//��С������
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

//����ӷ�
class UnusualAdd {
public:
	int addAB(int A, int B) {
		int sum = 0, carry = 0;
		while (B != 0){
			//��Ӧλ�ĺ�
			sum = A^B;
			//��Ӧλ�͵Ľ�λ����Ȼ�ǽ�λ����Ҫ��������һλ
			carry = (A&B) << 1;
			A = sum;
			B = carry;
		}
		return sum;
	}
};


//��·���ܺ�
#include<iostream>
using namespace std;
int pathNum(int n, int m)
{
	if (n > 1 && m > 1)
		//b������ݹ�
		return pathNum(n - 1, m) + pathNum(n, m - 1);
	else if (((n >= 1) && (m == 1)) || ((n == 1) && (m >= 1)))
		// a�������ֹ����
		return n + m;
	else
		//����Ϊ0ʱ�� ·��Ϊ0
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