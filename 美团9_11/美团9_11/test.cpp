#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//
//	string resultString;
//
//	const int N = 256;
//	bool hash[N] = { false };
//	for (int i = 0; i < str.size(); ++i)
//	{
//		if (hash[str[i]] == false)
//		{
//			hash[str[i]] = true;
//			resultString.push_back(str[i]);
//		}
//	}
//
//	cout << resultString << endl;
//	return 0;
//}
//


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str;
//	while (cin >> str)
//	{
//		int k = 0;
//		string str2 = str;
//		for (int i = 0; i < str.size(); ++i)
//		{
//			int j = 0;
//			for (; j < k; ++j)
//			{
//				if (str[i] == str2[j])
//					break;
//			}
//			if (j == k)
//				str2[k++] = str[i];
//		}
//		cout << str2 << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;

//void del_samechar(char* str)
//{
//	char *p = str, *q;
//	while (*p)
//	{
//		for (q = p + 1; *p == *q; q++);
//		if (q == p + 1)*str++ = *p++;
//		else p = q;
//	}
//	*str = '\0';
//}
//int main()
//{
//	char* str;
//	while (cin >> str)
//	{
//		del_samechar(str);
//		cout << str << endl;
//	}
//	return 0;
//}



//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str1, str2;
//	while (cin >> str1 >> str2)
//	{
//		if (str1.empty() || str2.empty())
//			cout << str1 << endl;
//		for (int i = 0; i < str1.size(); ++i)
//		{
//			for (int j = 0; j < str2.size(); ++j)
//			{
//				while (str1[i] == str2[j])
//					str1.erase(i, 1);
//			}
//		}
//		cout << str1 << endl;
//	}
//	return 0;
//}
//
//



//#include <iostream>
//using namespace std;
//
//char* removeStr2InStr1(char *str1,char *str2)
//{ 
//	if(str1 == NULL) 
//		return NULL; 
//	if( str1 != NULL && str2 == NULL ) 
//		return str1; 
//	char buf[256] = {0}; 
//	char *cur = str2; 
//	while(*cur) 
//	{ 
//		buf[*(cur++)] = 1; 
//	} // 快慢指针：快指针来找是否存在相同的字符，存在则继续向前找 
//	// 不相同，则将其字符拷贝给慢指针 
//	char *fast = str1;
//	char *slow = str1;
//	while( *fast ) 
//	{ 
//		if( buf[*fast] != 1 ) // 不存在 
//		{ 
//			*slow = *fast; 
//			slow++; fast++; 
//		} 
//		else{ // 存在，则就继续向前走 
//			fast++; 
//		}
//	} 
//		*slow = '\0';
//		return str1;
//}


//