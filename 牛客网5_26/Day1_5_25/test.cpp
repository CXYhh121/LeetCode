#define _CRT_SECURE_NO_WARNINGS

//牛客网删除公共字符
//方法一
//#include<iostream>
//#include<string>
//#include<unordered_map>
//using namespace std;
//int main()
//{
//	string str; getline(cin, str);
//	string s; getline(cin, s);
//	unordered_map<char, int> mp;
//	for (auto& e : s)
//	{
//		mp[e]++;
//	}
//	string ret = "";
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (mp.find(str[i]) != mp.end() && mp[str[i]] > 0)
//		{
//			continue;
//		}
//		ret += str[i];
//	}
//	cout << ret << endl;
//	return 0;
//}


//解法二
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	// 注意这里不能使用cin接收，因为cin遇到空格就结束了。 
//	// oj中IO输入字符串最好使用getline。
//	string str1, str2;
//	//cin>>str1;
//	//cin>>str2;
//	getline(cin, str1);
//	getline(cin, str2);
//	// 使用哈希映射思想先str2统计字符出现的次数 
//	int hashtable[256] = {0};
//
//	for (size_t i = 0; i < str2.size(); ++i) {
//		hashtable[str2[i]]++;
//	}
//	// 遍历str1，str1[i]映射hashtable对应位置为0，则表示这个字符在
//	// str2中没有出现过，则将他+=到ret。注意这里最好不要str1.erases(i) // 因为边遍历，边erase，容易出错。
//	string ret;
//	for (size_t i = 0; i < str1.size(); ++i)
//	{
//		if (hashtable[str1[i]] == 0)
//			ret += str1[i];
//	}
//	cout << ret << endl;
//	return 0;
//}
//
////方法三
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	for (int i = 0; i < s2.size(); i++)
//	{
//		int index;
//		while ((index = s1.find(s2[i])) != -1)
//		{
//			s1.erase(index, 1);
//		}
//	}
//	cout << s1 << endl;
//	return 0;
//}





//牛牛举办编程比赛，求如何划分队伍使两个队伍平均值之和最大
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cin >> n;
//	vector<int> v(3 * n);
//	long long int max = 0;
//
//	for (int i = 0; i < (3 * n); ++i)
//	{
//		cin >> v[i];
//	}
//	sort(v.begin(), v.end());
//	for (int i = n; i < (3 * n) - 1; i += 2)
//		max += v[i];
//	cout << max << endl;
//	return 0;
//}



//倒置字符串中的单词

//解法一
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str;
//	string ret = "";
//	while (cin >> str)
//	{
//		ret = (" " + str) + ret;
//	}
//	ret.erase(ret.begin());
//	cout << ret << endl;
//	return 0;
//}


//解法二
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//void reverse_string(string& s)
//{
//	vector<string> v;
//	size_t start = 0, pos = 0;
//	do{
//		pos = s.find(' ', start);
//		string str = s.substr(start, pos - start);
//		v.push_back(str);
//		start = pos + 1;
//	} while (pos < s.size());
//	vector<string>::reverse_iterator it = v.rbegin();
//	while (it != v.rend())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}
//int main()
//{
//	string s;
//	getline(cin, s);
//	reverse_string(s);
//	return 0;
//}

//解法三
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main() 
//{
//	string s;
//	// 注意这里要使用getline，cin>>s遇到空格就接收结束了 getline(cin, s);
//	// 翻转整个句子 reverse(s.begin(), s.end()); // 翻转单词
//	auto start = s.begin(); while (start != s.end())
//	{
//		auto end = start;
//		while (end != s.end() && *end != ' ')
//			end++;
//		reverse(start, end);
//		if (end != s.end())
//			start = end + 1;
//		else
//			start = end;
//	}
//		cout << s << endl;
//		return 0;
//}



//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str;
//	getline(cin, str);
//
//	vector<string> v;
//	size_t pos = 0, start = 0;
//	do{
//		pos = str.find(' ', start);
//		string ret = str.substr(start, pos - start);
//		v.push_back(ret);
//		start = pos + 1;
//	} while (pos < str.size());
//
//	vector<string>::reverse_iterator it = v.rbegin();
//	while (it != v.rend())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}