#define _CRT_SECURE_NO_WARNINGS

//��ˮƿ����
#include<iostream>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		if (n == 0) break;
		//�����Ľⷨ
		/*int ret = 0;
		int a, b;
		while(n >= 3){
		a = n/3;
		b = n%3;
		ret += a;
		n = a + b;
		}
		if(n == 2) ret += 1;
		cout<<ret<<endl;*/
		//�Ӹ��������п��Թ۲�����Ĺ���
		cout << n / 2 << endl;
	}
	return 0;
}

//��a��b�����ַ����е�������Ӵ�
//˼·һ
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		if (a.size() > b.size())
			swap(a, b);
		string str_m;//�洢������Ӵ�
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = i; j < a.size(); j++)
			{
				string temp = a.substr(i, j - i + 1);
				if (int(b.find(temp))<0)
					break;
				else if (str_m.size() < temp.size())
					str_m = temp;
			}
		}
		cout << str_m << endl;
	}
	return 0;
}

//˼·��

//˼·����̬�滮�������⣬��һ��start��Ǽ���,ע�⽫�϶��Ӵ����ȳ��ֵ��Ǹ����
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void findMaxCommonStr(string s1, string s2)
{
	if (s1.length()>s2.length())
		swap(s1, s2);//s1���ڱ���϶̵��Ӵ�
	int len1 = s1.length(), len2 = s2.length();
	int maxLen = 0, start = 0;
	vector<vector<int> >dp(len1 + 1, vector<int>(len2 + 1, 0));
	for (int i = 1; i <= len1; ++i)
	for (int j = 1; j <= len2; ++j)
	{
		if (s1[i - 1] == s2[j - 1])
		{
			dp[i][j] = dp[i - 1][j - 1] + 1;
			if (dp[i][j]>maxLen)
			{
				maxLen = dp[i][j];
				start = i - maxLen;//��¼������Ӵ�����ʼλ��
			}
		}
	}
	cout << s1.substr(start, maxLen) << endl;
}
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		findMaxCommonStr(s1, s2);
	}
	return 0;
}