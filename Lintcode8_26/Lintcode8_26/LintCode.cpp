#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

//LintCode 8.旋转字符串解法一
//class Solution {
//public:
//	/**
//	* @param str: An array of char
//	* @param offset: An integer
//	* @return: nothing
//	*/
//	void rotateString(string &str, int offset) {
//		// write your code here
//		if (str.empty())
//			return;
//		int i = 0;
//		int j = 0;
//		string ret = str;
//
//		offset %= str.size();
//		for (i = str.size() - offset; i < str.size(); i++)
//		{
//			str[j++] = ret[i];
//		}
//		for (i = 0; i < str.size(); i++)
//		{
//			str[j++] = ret[i];
//		}
//
//	}
//};

//旋转字符串解法二


//LintCode 209 第一次只出现一次的字符
//解法一
//class Solution {
//public:
//	/**
//	* @param str: str: the given string
//	* @return: char: the first unique character in a given string
//	*/
//	char firstUniqChar(string &str) {
//		// Write your code here
//		//定义一个数组统计每个字符出现的个数
//		int countchar[26] = { 0 };
//		int size = str.size();
//
//		//遍历一遍字符串，统计每个字符出现的个数
//		for (int i = 0; i < size; ++i)
//		{
//			countchar[str[i] - 'a']++;//在计数数组的对应位置计数
//		}
//
//		//再遍历一遍字符串，看哪个字符是第一次只出现一次的,返回下标。
//		for (int i = 0; i < size; ++i)
//		{
//			if (countchar[str[i] - 'a'] == 1)
//				return str[i];
//		}
//
//		return ' ';
//	}
//};

//class Solution {
//public:
//	/**
//	* @param str: str: the given string
//	* @return: char: the first unique character in a given string
//	*/
//	char firstUniqChar(string &str) {
//		// Write your code here
//		if (str.empty())
//			return '0';
//		map<char, int> countmap;
//		for (auto e : str)
//			countmap[e]++;
//		for (auto kv : countmap)
//		{
//			if (kv.second == 1)
//				return kv.first;
//		}
//	}
//};

//解法三
//class Solution {
//public:
//	/**
//	* @param str: str: the given string
//	* @return: char: the first unique character in a given string
//	*/
//	char firstUniqChar(string &str)
//	{
//		// Write your code here
//
//		for (int i = 0; i < str.size(); i++)
//		{
//			int count = 0;
//			for (int j = 0; j < str.size(); j++)
//			{
//				if (str[i] == str[j])
//					count++;
//				if (count > 1)
//					break;
//			}
//			if (count == 1)
//				return str[i];
//		}
//	}
//};


