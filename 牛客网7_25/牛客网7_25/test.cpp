#define _CRT_SECURE_NO_WARNINGS


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//int main()
//{
//	int num;
//	while (cin >> num)
//	{
//		vector<int> v(num);
//		vector<int> cur;
//		vector<int> res;
//
//		for (int i = 0; i < num; i++)
//			cin >> v[i];
//		for(size_t i = 0; i < v.size(); i++)
//		{
//			for (size_t j = 0; j < v.size() - 1; j++)
//			{
//				cur.push_back(v[j]);
//				if (v[j + 1] > v[j])
//					cur.push_back(v[j + 1]);
//				else
//					continue;
//			}
//			if (cur.size() > res.size())
//				res = cur;
//		}
//		cout << res.size() << endl;
//	}
//	return 0;
//}




//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v({ 0, 0, 1 });
//	v.resize(21);
//	for (size_t i = 3; i < v.size(); i++)
//		v[i] = (i - 1)*(v[i - 1] + v[i - 2]);
//	int num;
//	while (cin >> num)
//	{
//		cout << v[num] << endl;
//	}
//	return 0;
//}




// write your code here cpp
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#define N 1001
using namespace std;
int main()
{
	int n;
	while (cin >> n){
		int a[N];//����Ǹ�ʲô���أ�����û�������Ǵ�
		int maxLen[N];//�����ʲô ���أ���������
		//����������ã����ƣ������˼�룬�����һ����������У�����������ǵ���ÿ������
		//������У�ps:���˵�һ����
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			maxLen[i] = 1;//Ĭ��ÿ����ʼ��Ϊ1����ʵ�Ҹо�0Ҳ���ԣ������еĵط���Ҫ���£���΢�鷳�˵�
			//ϲ���Ŀ����Լ����ԣ�ps:��0�Ļ��������Լ�д�������ˣ������ǽ�����˵���
		}
		for (int i = 2; i <= n; i++)
		{
			for (int j = 1; j<i; j++)
			if (a[i]>a[j])
				maxLen[i] = max(maxLen[i], maxLen[j] + 1);
			//����max�����õ� ���Ǻ�������
		}
		cout << *max_element(maxLen + 1, maxLen + n + 1) << endl;
	}
}