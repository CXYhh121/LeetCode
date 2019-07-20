#define _CRT_SECURE_NO_WARNINGS


//合唱团
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//int main(){
//	int n;
//	while (cin >> n){
//		vector<int> a(n);
//		for (int i = 0; i < n; i++){
//			cin >> a[i];
//		}
//		int k, d;
//		cin >> k >> d;
//		vector<vector<long long>> dp_max(n, vector<long long>(k + 1, 0));
//		vector<vector<long long>> dp_min(n, vector<long long>(k + 1, 0));
//		for (int i = 0; i < n; i++){
//			dp_max[i][1] = a[i];
//			dp_min[i][1] = a[i];
//		}
//		for (int i = 0; i < n; i++){
//			for (int j = 2; j <= k; j++){
//				for (int m = max(0, i - d); m <= i - 1; m++){
//					dp_max[i][j] = max(dp_max[i][j], max(dp_max[m][j - 1] * a[i], dp_min[m][j - 1] * a[i]));
//					dp_min[i][j] = min(dp_min[i][j], min(dp_min[m][j - 1] * a[i], dp_max[m][j - 1] * a[i]));
//				}
//			}
//		}
//		long long max_value = dp_max[k - 1][k];
//		for (int i = k; i < n; i++){
//			max_value = max(max_value, dp_max[i][k]);
//		}
//		cout << max_value << endl;
//	}
//	return 0;
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
//struct person{
//	int h;
//	int w;
//};
//
//bool cmp(person first, person second)
//{
//	if (first.w != second.w)
//		return first.w < second.w;
//	else
//		return first.h > second.h;
//}
//
//
//int main()
//{
//	int N;
//	while (cin >> N)
//	{
//		vector<person> pv;
//		int number, weight, height;
//		for (int i = 0; i < N; ++i)
//		{
//			cin >> number >> weight >> height;
//			person tmp;
//			tmp.h = height;
//			tmp.w = weight;
//			pv.push_back(tmp);
//		}
//
//		stable_sort(pv.begin, pv.end(), cmp);
//		vector<int> liss(N + 1, 1);
//		int max = 0;
//		for (int i = 0; i < N; i++){
//			for (int j = 0; j < N; j++){
//				if (pv[j].h < pv[i].h && liss[j] + 1>liss[i]){
//					liss[i] = liss[j] + 1;
//					if (max < liss[i]) 
//						max = liss[i];
//				}
//			}
//		}
//		cout << max << endl;
//	}
//	return 0;
//}



//马戏团正确解答
//#include <iostream> 
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct node{
//	int w;
//	int h;
//};
//bool cmp(node first, node second){
//	if (first.w != second.w) return first.w<second.w;
//	else return first.h > second.h;
//}
//int main(){
//	int n;
//	while (cin >> n){
//		if (n <= 0) break;
//		vector<node> vec;
//		for (int i = 0; i<n; i++){
//			int num, weight, height;
//			cin >> num >> weight >> height;
//			node tmp;
//			tmp.w = weight;
//			tmp.h = height;
//			vec.push_back(tmp);
//		}
//		stable_sort(vec.begin(), vec.end(), cmp);
//		vector<int> liss(n + 1, 1);
//		int max = 0;
//		for (int i = 0; i<n; i++){
//			for (int j = 0; j<n; j++){
//				if (vec[j].h<vec[i].h&&liss[j] + 1>liss[i]){
//					liss[i] = liss[j] + 1;
//					if (max<liss[i]) max = liss[i];
//				}
//			}
//		}
//		cout << max << endl;
//	}
//	return 0;
//}