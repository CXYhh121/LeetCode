#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fenjie(int num)
{
	vector<int> v;
	int orgin = num;
	for (int i = 2; i < sqrt(orgin); ++i)
	{
		if (num % i == 0)
		{
			while (num%i == 0)
			{
				num = num / i;
				v.push_back(i);
			}
		}
	}
	if (num > 1)
		v.push_back(num);

	cout << orgin << " = " << v[0];
	for (int i = 1; i < v.size(); ++i)
	{
		cout << " * " << v[i];
	}
	cout << endl;
}

int main()
{
	int num;
	while (cin >> num)
	{
		fenjie(num);
	}
	return 0;
}