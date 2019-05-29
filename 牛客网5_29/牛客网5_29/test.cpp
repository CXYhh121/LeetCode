#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//bool longer(const string &x, const string &y) {
//	return x.length() < y.length();
//}
//
//bool bigger(const string &x, const string &y) {
//	return x < y;
//}
//
//void display(vector<string> const &x) {
//	for (const string &s : x) {
//		cout << s << endl;
//	}
//	cout << endl;
//}
//
//int main() {
//	vector<string> a, b, c;
//	int n;
//	cin >> n;
//	string x;
//	for (int i = 0; i < n; i++) {
//		cin >> x;
//		a.push_back(x);
//		b.push_back(x);
//		c.push_back(x);
//	}
//	sort(b.begin(), b.end(), longer);
//	sort(c.begin(), c.end(), bigger);
//	//    cout << "before sort" << endl;
//	//    display(a);
//	//    cout << "sort by length" << endl;
//	//    display(b);
//	//    cout << "sort by dict" << endl;
//	//    display(c);
//	bool length = a == b;
//	bool dict = a == c;
//	if (length && dict) {
//		cout << "both";
//	}
//	else if (length) {
//		cout << "lengths";
//	}
//	else if (dict) {
//		cout << "lexicographically";
//	}
//	else {
//		cout << "none";
//	}
//	return 0;
//}

//计算糖果
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	int A = (a + c) / 2;
//	int C = (d - b) / 2;
//	int B1 = (c - a) / 2;
//	int B2 = (b + d) / 2;
//	if (B1 != B2)
//		cout << "No";
//	else
//		cout << A << " " << B1 << " " << C;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c, d;
//	int A, B, C;
//	while (cin >> a >> b >> c >> d)
//	{
//		A = (a + c) / 2;
//		B = (b + d) / 2;
//		C = (d - b) / 2;
//		if (A - B == a && B - C == b && A + B == c && B + C == d)
//		{
//			cout << A << " " << B << " " << C << endl;
//		}
//		else
//		{
//			cout << "No" << endl;
//		}
//	}
//	return 0;
//}


//进制间的转换

//#include <iostream>
//#include <string>
//
//using namespace std;
//int main(){
//	string s = "", table = "0123456789ABCDEF";
//	int m, n;
//	cin >> m >> n;
//	while (m){
//		if (m<0){
//			m = -m;
//			cout << "-";
//		}
//		s = table[m%n] + s;
//		m /= n;
//	}
//	cout << s << endl;
//	return 0;
//}

//统计回文字符串

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool isPalindrome(string& str)
//{
//	size_t begin = 0;
//	size_t end = str.size() - 1;
//	while (begin < end)
//	{
//		if (str[begin] == str[end])
//		{
//			++begin;
//			--end;
//		}
//		else
//			break;
//	}
//	if (begin < end)
//		return false;
//	else
//		return true;
//}
//int main()
//{
//	int count = 0;
//	string str1, str2;
//	getline(cin, str1);
//	getline(cin, str2);
//
//	for (size_t i = 0; i <= str1.size(); ++i)
//	{
//		string str3 = str1;
//		str3.insert(i, str2);
//		if (isPalindrome(str3))
//			count++;
//	}
//	cout << count << endl;
//	return 0;
//}

//连续最大和
//#include <iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int size;
//	cin >> size;
//	vector<int> nums(size);
//	for (size_t i = 0; i < size; ++i)
//		cin >> nums[i];
//	int result = nums[0];
//	int sum1 = 0, sum2 = 0;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		// 计算到num[i]的子数组的最大和
//		sum2 = sum1 >= 0 ? sum1 + nums[i] : nums[i];
//		if (sum2 > result)
//			result = sum2;
//		if (sum2 < 0)
//			sum2 = 0;
//		sum1 = sum2;
//	}
//	cout << result << endl;
//	return 0;
//}


//不要二
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int w, h, res = 0;
//	cin >> w >> h;
//	vector<vector<int>> a;
//	a.resize(w);
//	for (auto& e : a)
//		e.resize(h, 1);
//	for (int i = 0; i<w; i++)
//	{
//		for (int j = 0; j<h; j++)
//		{
//			if (a[i][j] == 1)
//			{
//				res++;
//				// 标记不能放蛋糕的位置
//				if ((i + 2)<w)
//					a[i + 2][j] = 0;
//				if ((j + 2)<h)
//					a[i][j + 2] = 0;
//			}
//		}
//	}
//	cout << res;
//	return 0;
//}

//不要二解法二
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(){
//	int W, H, i, j, counts = 0;
//	cin >> W >> H;
//	if (W % 4 == 0 || H % 4 == 0){
//		counts = W*H / 2;
//	}else if(W % 2 == 0 && H % 2 == 0){
//		counts = (W*H / 4 + 1) * 2;
//	}
//	else{
//		counts = W*H / 2 + 1;
//	}
//	cout << counts << endl;
//	return 0;
//}