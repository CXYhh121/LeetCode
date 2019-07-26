#define _CRT_SECURE_NO_WARNINGS

//�ַ�������
//#include <iostream>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	int len1, len2;
//	while (cin >> s1 >> s2 >> len1 >> len2)
//	{
//		int num = 0;
//		for (int i = len1; i <= len2; ++i)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				num += (s2[j] - s1[j])*pow(26, i - j - 1);
//			}
//		}
//		cout << num - 1 << endl;
//	}
//	return 0;
//}


//�ⷨ��
//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//using namespace std;
//
//int main()
//{//�������и��������ӣ�����ַ���ֻ����Сд��ĸ����Ȼ�𰸾Ͳ�Ӧ����56��
//	string s1, s2;
//	int len1, len2;
//	while (cin >> s1 >> s2 >> len1 >> len2){
//		//ֻ����Сд��ĸ���ַ������Կ���26���Ƶ�����
//		//��s1��s2������len2����
//		s1.append(len2 - s1.size(), 'a');
//		s2.append(len2 - s2.size(), (char)('z' + 1));
//		vector<int> array;
//		for (int i = 0; i < len2; i++){
//			array.push_back(s2[i] - s1[i]);
//		}
//		int result = 0;
//		for (int i = len1; i <= len2; i++){
//			for (int k = 0; k < i; k++){
//				result += array[k] * pow(26, i - 1 - k);
//			}
//		}
//		//�����ַ�����󶼲�������s2�����������Ҫ��1��
//			cout << result - 1 << endl;
//	}
//	return 0;
//}


//�����������
#include <iostream>
#include<string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
#define N 1200

int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		int l1 = str1.size() - 1;
		int l2 = str2.size() - 1;
		vector<vector<int>> dp(N, vector<int>(N, 0));

		for (int i = 1; i <= l1; i++)
		{
			for (int j = 1; j <= l2; j++)
			{
				if (str1[i - 1] == str2[j - 1])
					dp[i][j] = dp[i - 1][j - 1] + 1;
				else
					dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
		}
		cout << dp[l1][l2] << endl;
	}
	return 0;
}