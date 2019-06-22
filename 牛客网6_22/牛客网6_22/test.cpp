#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//΢�ź��
class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		sort(gifts.begin(), gifts.end()); //����һ���������֮���Ȼ�����м�
		int middle = gifts[n / 2];
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			//ͳ�������м�����ĸ��� 
			if (gifts[i] == middle) 
			{
				count++;
			}
		}
		//�����������һ�룬����ڳ���һ�����
		if (count > n / 2)
			return middle;
		else
			return 0;
	}
};


//class Gift {
//public:
//	int getValue(vector<int> gifts, int n) {
//		map<int, int> count;
//		
//		int middle = gifts.size() / 2;
//		for (const auto& e : gifts)
//		{
//			++count[e];
//		}
//		for (const auto& e : count)
//		{
//			if (e.second >= middle)
//				return e.first;
//		}
//		return 0;
//	}
//};



//�����ַ����ľ���
#include <string>
#include <iostream>
#include <vector>
using namespace std;
int minDistance(string word1, string word2)
{ // word��մ�֮��ı༭����Ϊword�ĳ��� 
	if (word1.empty() || word2.empty())
	{
		return max(word1.size(), word2.size());
	}
	int len1 = word1.size();
	int len2 = word2.size(); // F(i,j)��ʼ��
	vector<vector<int>>  f(1 + len1, vector<int>(1 + len2, 0));
	for (int i = 0; i <= len1; ++i)
	{
		f[i][0] = i;
	}
	for (int i = 0; i <= len2; ++i)
	{
		f[0][i] = i;
	}
	for (int i = 1; i <= len1; ++i) {
		for (int j = 1; j <= len2; ++j) {
			// F(i,j) = min { F(i-1,j)+1, F(i,j-1) +1, F(i-1,j-1) + //(w1[i]==w2[j]?0:1) }
			// �ж�word1�ĵ�i���ַ��Ƿ���word2�ĵ�j���ַ���� 
			if (word1[i - 1] == word2[j - 1]) {
				f[i][j] = 1 + min(f[i][j - 1], f[i - 1][j]); // �ַ���ȣ�F(i-1,j-1)�༭���벻��
				f[i][j] = min(f[i][j], f[i - 1][j - 1]);
			}
			else
			{
				f[i][j] = 1 + min(f[i][j - 1], f[i - 1][j]); // �ַ�����ȣ�F(i-1,j-1)�༭���� + 1
				f[i][j] = min(f[i][j], 1 + f[i - 1][j - 1]);
			}
		}
	}
	return f[len1][len2];
}
int main(){
	string a, b;
	while (cin >> a >> b)
		cout << minDistance(a, b) << endl;
	return 0;
}