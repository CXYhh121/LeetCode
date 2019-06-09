#define _CRT_SECURE_NO_WARNINGS

// 用递归就可以了
#include <iostream>
#include <string>
using namespace std;

bool match(const char* pattern, const char *str)
{
	if (*pattern == '\0' && *str == '\0')
		return true;
	if (*pattern == '\0' || *str == '\0')
		return false;

	if (*pattern == '?')
	{
		return match(pattern + 1, str + 1);
	}
	else if (*pattern == '*')
	{
		// 匹配0个1个或多个
		return match(pattern + 1, str) || match(pattern + 1, str + 1) || match(pattern, str + 1);
	}
	else if (*pattern == *str)
	{
		return match(pattern + 1, str + 1);
	}

	return false;
}
int main(void)
{
	string pattern, str;
	while (cin >> pattern >> str)
	{
		bool ret = match(pattern.c_str(), str.c_str());
		if (ret)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}


//统计每月兔子的总数
#include <iostream>
using namespace std;

int main(){
	int m;
	while (cin >> m){
		int a = 1, b = 0, c = 0;//a:一个月兔子数，b：两个月兔子数，c：三个月兔子个数
		while (--m){//每过一个月兔子数变化
			c += b;
			b = a;
			a = c;
		}
		cout << a + b + c << endl;
	}
}

#include <iostream>

using namespace std;
int count(int mouth)
{
	int sum = 0;
	if (mouth == 1)
		sum = 1;
	else if (mouth == 2)
		sum = 1;
	else if (mouth == 3)
		sum = 2;
	else
		sum = count(mouth - 1) + count(mouth - 2);
	return sum;
}

int main()
{
	int mouth;
	while (cin >> mouth)
	{
		cout << count(mouth) << endl;
	}
	return 0;
}