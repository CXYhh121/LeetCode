#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

//LintCode 8.��ת�ַ����ⷨһ
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

//��ת�ַ����ⷨ��


//LintCode 209 ��һ��ֻ����һ�ε��ַ�
//�ⷨһ
//class Solution {
//public:
//	/**
//	* @param str: str: the given string
//	* @return: char: the first unique character in a given string
//	*/
//	char firstUniqChar(string &str) {
//		// Write your code here
//		//����һ������ͳ��ÿ���ַ����ֵĸ���
//		int countchar[26] = { 0 };
//		int size = str.size();
//
//		//����һ���ַ�����ͳ��ÿ���ַ����ֵĸ���
//		for (int i = 0; i < size; ++i)
//		{
//			countchar[str[i] - 'a']++;//�ڼ�������Ķ�Ӧλ�ü���
//		}
//
//		//�ٱ���һ���ַ��������ĸ��ַ��ǵ�һ��ֻ����һ�ε�,�����±ꡣ
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

//�ⷨ��
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


