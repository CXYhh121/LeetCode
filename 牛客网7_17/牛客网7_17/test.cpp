#define _CRT_SECURE_NO_WARNINGS

//骆驼命名法
//#include<string>
//#include<iostream>
//using namespace std;
//
//int main(){
//	string str;
//	while (cin >> str){
//		int len = str.size();
//		string::iterator it = str.begin();
//		while (it != str.end()){
//			if (*it == '_'){
//				it = str.erase(it);   //去除'_'
//				*it -= 32; //将下一位字母由小写转换为大写
//			}
//			else{
//				it++;
//			}
//		}
//		cout << str << endl;
//	}
//	return 0;
//}




//单词倒排错误解答
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str;
//	vector<string> v;
//	while (getline(cin, str))
//	{
//		string res;
//		for (size_t i = 0; i <= str.size(); i++)
//		{
//			if (str[i] >= 'A' && str[i] <= 'z')
//			{
//				res += str[i];
//			}
//			else
//			{
//				v.push_back(res);
//				res.clear();
//			}
//		}
//		vector<string>::reverse_iterator rit = v.rbegin();
//		while (rit != v.rend())
//		{
//			cout << *rit << " ";
//			++rit;
//		}
//		cout << endl;
//	}
//	return 0;
//}



//单词倒排正确解答一
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str;
//	vector<string> v;
//	while (getline(cin, str))
//	{
//		string res = "";
//		for (size_t i = 0; i < str.size(); i++)
//		{
//			if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
//			{
//				res += str[i];
//			}
//			else
//			{
//				if (res.size() > 0)
//				{
//					v.push_back(res);
//					res.clear();
//				}
//
//			}
//		}
//		if (res.size() > 0)
//			v.push_back(res);
//		vector<string>::reverse_iterator rit = v.rbegin();
//		while (rit != v.rend())
//		{
//			cout << *rit << " ";
//			++rit;
//		}
//		cout << endl;
//	}
//	return 0;
//}



//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main(){
//	string str;
//	while (getline(cin, str)){
//		vector<string> array;
//		string temp;
//		for (int i = 0; i <= str.length(); i++){
//			if (str[i] != ' '&&str[i] != '\0')
//				temp += str[i];
//			else{
//				array.push_back(temp);
//				temp.clear();
//			}
//		}
//		for (int i = array.size() - 1; i >= 0; i--)
//			cout << array[i] << ' ';
//		cout << endl;
//
//	}
//	return 0;
//}