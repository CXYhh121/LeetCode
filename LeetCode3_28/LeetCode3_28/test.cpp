#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
//计算字符串中最后一个单词的长度
//方法一,使用循环从后往前找
class Solution {
public:
	int lengthOfLastWord(string s) {
		int size = s.size() - 1;
		int len = 0;
		while (size >= 0 && s[size] == ' ')
			--size;
		while (size >= 0 && s[size] != ' ')
		{
			++len;
			--size;
		}

		return len;
	}
};

//方法二，使用string中的rfind接口
class Solution {
public:
	int lengthOfLastWord(string s) {
		int size = s.size() - 1;
		while (size > 0 && s[size] == ' ')
			--size;

		size_t pos = s.rfind(' ', size);

		return size - pos;
	}
};
int main()
{
	Solution s;
	string str = "a ";
	int ret = s.lengthOfLastWord(str);

	cout << ret << endl;
	return 0;
}