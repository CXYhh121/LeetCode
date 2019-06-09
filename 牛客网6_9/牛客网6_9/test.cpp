#define _CRT_SECURE_NO_WARNINGS

// �õݹ�Ϳ�����
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
		// ƥ��0��1������
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


//ͳ��ÿ�����ӵ�����
#include <iostream>
using namespace std;

int main(){
	int m;
	while (cin >> m){
		int a = 1, b = 0, c = 0;//a:һ������������b����������������c�����������Ӹ���
		while (--m){//ÿ��һ�����������仯
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