#define _CRT_SECURE_NO_WARNINGS

//百度，返回字符串中出现次数最多的前K个字符
//#include <iostream>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	string str;
//	while (cin >> str)
//	{
//		unordered_map<char, int> countmap;
//		for (auto& e : str)
//			countmap[e]++;
//		int k;
//		cin >> k;
//		sort(countmap.begin(), countmap.end());
//
//		auto it = countmap.begin();
//		while (it != countmap.end() && k)
//		{
//			cout << it->first << ":" << it->second << endl;
//			++it;
//			k--;
//		}
//	}
//	return 0;
//}


//返回链表的倒数第K个节点



//中信银行，字符串相乘
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string Multiply(string& num1, string& num2)
//{
//	if (num1 == "0" || num2 == "0")
//		return "0";
//	int size1 = num1.size(), size2 = num2.size();
//	int mul, add;
//	string result(size1 + size2, '0');
//	for (int i = size1 - 1; i >= 0; --i)
//	{
//		for (int j = size2 - 1; j >= 0; --j)
//		{
//			int tmp = (num1[i] - '0') * (num2[j] - '0');
//			mul = tmp / 10;
//			tmp %= 10;
//			int tmp2 = result[i + j + 1] - '0' + tmp + add;
//			result[i + j + 1] = tmp2 % 10 + '0';
//			add = tmp2 / 10;
//		}
//		result[i] = mul + add;
//	}
//	if (result[0] == '0')
//		result.substr(1, result.size());
//	return result;
//}
//
//int main()
//{
//	string num1, num2;
//	while (cin >> num1 >> num2)
//	{
//		string result = Multiply(num1, num2);
//		cout << result << endl;
//	}
//	return 0;
//}