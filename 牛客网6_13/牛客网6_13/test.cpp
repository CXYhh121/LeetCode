#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	void print()
//	{
//		cout << "A:print()";
//	}
//};
//class B : private A
//{
//public:
//	void print()
//	{
//		cout << "B:print()";
//	}
//};
//class C : public B
//{
//public:
//	void print()
//	{
//		//A::print();
//	}
//};
//int main()
//{
//	C b;
//	b.print();
//}



//统计每月兔子的个数，实为斐波拉切数列的变形
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

//字符串通配符
#include <iostream>
#include <string>
using namespace std;
bool pipei(const char* str1, const char* str2)
{
	if (*str1 == '\0' && *str2 == '\0')
		return true;
	if (*str1 == '\0' || *str2 == '\0')
		return false;
	if (*str1 == '?')
	{
		return pipei(str1 + 1, str2 + 1);
	}
	else if (*str1 == '*')
	{//匹配0个1个或多个
		return pipei(str1 + 1, str2) || pipei(str1 + 1, str2 + 1) || pipei(str1, str2 + 1);
	}
	else if (*str1 == *str2)
	{
		return pipei(str1 + 1, str2 + 1);
	}
	return false;
}
int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		bool ret = pipei(str1.c_str(), str2.c_str());
		if (ret)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}