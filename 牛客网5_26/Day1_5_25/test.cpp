#define _CRT_SECURE_NO_WARNINGS

//ţ����ɾ�������ַ�
//����һ
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


//�ⷨ��
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	// ע�����ﲻ��ʹ��cin���գ���Ϊcin�����ո�ͽ����ˡ� 
//	// oj��IO�����ַ������ʹ��getline��
//	string str1, str2;
//	//cin>>str1;
//	//cin>>str2;
//	getline(cin, str1);
//	getline(cin, str2);
//	// ʹ�ù�ϣӳ��˼����str2ͳ���ַ����ֵĴ��� 
//	int hashtable[256] = {0};
//
//	for (size_t i = 0; i < str2.size(); ++i) {
//		hashtable[str2[i]]++;
//	}
//	// ����str1��str1[i]ӳ��hashtable��Ӧλ��Ϊ0�����ʾ����ַ���
//	// str2��û�г��ֹ�������+=��ret��ע��������ò�Ҫstr1.erases(i) // ��Ϊ�߱�������erase�����׳���
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
////������
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





//ţţ�ٰ��̱���������λ��ֶ���ʹ��������ƽ��ֵ֮�����
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



//�����ַ����еĵ���

//�ⷨһ
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


//�ⷨ��
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

//�ⷨ��
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main() 
//{
//	string s;
//	// ע������Ҫʹ��getline��cin>>s�����ո�ͽ��ս����� getline(cin, s);
//	// ��ת�������� reverse(s.begin(), s.end()); // ��ת����
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