#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str1, str2;
//	
//	while (cin >> str1 >> str2)
//	{
//      map<char,int> countmap1, countmap2;//必须定义在循环内，若在外则该题无法通过
//		for (auto e : str1)
//			countmap1[e]++;
//		for (auto e : str2)
//			countmap2[e]++;
//
//		for (int i = 'A'; i <= 'Z'; i++)
//		{
//			if (countmap2[i] > countmap1[i])
//			{
//				cout << "No" << endl;
//				break;
//			}
//			if (i == 'Z')
//			{
//				cout << "Yes" << endl;
//			}
//		}
//
//	}
//	return 0;
//}



//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main()
//{
//	string A, B;
//	while (cin >> A >> B)
//	{
//		map<char, int> AA, BB;
//		for (int i = 0; i < A.size(); i++)
//		{
//			AA[A[i]]++;
//		}
//		for (int i = 0; i < B.size(); i++)
//		{
//			BB[B[i]]++;
//		}
//		for (int i = 'A'; i <= 'Z'; i++)
//		{
//			if (BB[i] > AA[i])
//			{
//				cout << "No" << endl;
//				break;
//			}
//			if (i == 'Z')
//			{
//				cout << "Yes" << endl;
//			}
//		}
//
//	}
//}



//兄弟单词错误解答，错在必须把
//vector<string> vs; string word, s; int index;定义在循环输入测试用例的循环内，否则无法进行测试
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool isBrother(string str, string s){
//	if (str.size() == s.size()){
//		if (str == s)
//			return false;
//		sort(str.begin(), str.end());
//		sort(s.begin(), s.end());
//		if (str == s)
//			return true;
//	}
//	return false;
//}
//
//int main()
//{
//	int n;
//	vector<string> vs;
//	string word, s;
//	int index;
//	while (cin >> n)
//	{
//		string str;
//		for (int i = 0; i < n;i++){
//			cin >> str;
//			vs.push_back(str);
//		}
//		sort(vs.begin(), vs.end());  // 因为是字典，一定要排序！！
//		cin >> word;
//		cin >> index;
//		int counts = 0;
//		
//		for (int i = 0; i < n; ++i){
//			if (isBrother(word, vs[i])){
//				counts++;
//				if (counts == index)
//					s = vs[i];
//			}
//		}
//		if (!vs.empty())
//			cout << counts << endl;
//		if (counts >= index)
//			cout << s << endl;
//		
//	}
//	return 0;
//}




//兄弟单词正确解答

//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//bool isBrother(string str, string s){
//	if (str.size() == s.size()){
//		if (str == s)
//			return false;
//		sort(str.begin(), str.end());
//		sort(s.begin(), s.end());
//		if (str == s)
//			return true;
//	}
//	return false;
//}
//int main(){
//	int num;
//	while (cin >> num){
//		string str;
//		string word, s;
//		int index;
//		vector<string> vs;
//		for (int i = 0; i < num; ++i){
//			cin >> str;
//			vs.push_back(str);
//		}
//		sort(vs.begin(), vs.end());  // 因为是字典，一定要排序！！
//		cin >> word;
//		cin >> index;
//		int counts = 0;
//
//		for (int i = 0; i < num; ++i){
//			if (isBrother(word, vs[i])){
//				counts++;
//				if (counts == index)
//					s = vs[i];
//			}
//		}
//		if (!vs.empty())
//			cout << counts << endl;
//		if (counts >= index)
//			cout << s << endl;
//
//	}
//	return 0;
//}