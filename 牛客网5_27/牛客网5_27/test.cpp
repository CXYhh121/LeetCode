#define _CRT_SECURE_NO_WARNINGS



//出现次数大于数组长度一半的数
//- **解法一**

//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	vector<int> v;
//	while (cin >> n)
//		v.push_back(n);
//
//	unordered_map<int, int> countmp;
//	for (auto& e : v)
//	{
//		countmp[e]++;
//	}
//
//	for (auto& kv : countmp)
//	{
//		if (kv.second >= v.size() / 2)
//			cout << kv.first << endl;
//	}
//	return 0;
//}
//- **解法二**

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	vector<int> v;
//	while (cin >> n)
//		v.push_back(n);
//
//	sort(v.begin(), v.end());
//
//	cout << v[v.size() / 2 - 1] << endl;
//	return 0;
//}

//- **解法三**
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	vector<int> v;
//	while (cin >> n)
//		v.push_back(n);
//	int count = 1, temp = v[0];
//	for (int i = 0; i < v.size(); ++i)
//	{
//		if (v[i] == temp)
//			count++;
//		else
//			count--;
//		if (count == 0)
//		{
//			temp = v[i];
//			count = 1;
//		}
//	}
//	cout << temp << endl;
//	return 0;
//}


//字符串中最长连续数字字符
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str, res, cur;
//	cin >> str;
//	for (size_t i = 0; i <= str.size(); ++i)
//	{
//		if (str[i] >= '0' && str[i] <= '9')
//			cur += str[i];
//		else{
//			if (res.size() < cur.size())
//				res = cur;
//			else
//				cur.clear();
//		}
//	}
//	cout << res << endl;
//	return 0;
//}