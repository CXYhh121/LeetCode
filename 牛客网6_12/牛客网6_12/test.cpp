#define _CRT_SECURE_NO_WARNINGS

//公共字符串的计算
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string str1, str2;
	while (cin >> str1 >> str2){
		int len1 = str1.size();
		int len2 = str2.size();
		int max = 0;
		vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
		for (int i = 1; i <= len1; ++i){
			for (int j = 1; j <= len2; ++j){
				if (str1[i - 1] == str2[j - 1])
					dp[i][j] = dp[i - 1][j - 1] + 1;
				if (dp[i][j] > max)
					max = dp[i][j];
			}
		}
		cout << max << endl;
	}
	return 0;
}



#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1, str2;
	int dis = 0, t = 0;
	string tmp;
	while (cin >> str1 >> str2)
	{
		int len = str1.length();
		for (int i = len; i>1; i--)
		{
			for (int j = 0; j<len; j++)
			{
				if (i + j <= len)
				{
					tmp = str1.substr(j, i);
					t = str2.find(tmp);
					if (t != -1 && tmp.length()>dis)
						dis = tmp.length();

				}
			}
		}
		cout << dis << endl;
	}

	return 0;
}



//反转字符串思路一
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		for (int i = str.size() - 1; i >= 0; --i)
			cout << str[i];
	}
	return 0;
}


//思路二
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		reverse(str.begin(), str.end());
		cout << str;
	}
	return 0;
}