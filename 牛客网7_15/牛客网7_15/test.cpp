#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//#include <math.h>
//using namespace std;
//struct fraction{                                            //分数
//	long long up, down;
//};
//long long gcd(long long a, long long b){                     //求最大公约数
//	if (b == 0) return a;
//	else return gcd(b, a%b);
//}
//fraction reduction(fraction result){                        //化简
//	if (result.down<0){                                      //使分母非负
//		result.up = -result.up;
//		result.down = -result.down;
//	}
//	if (result.up == 0) result.down = 1;
//	else{
//		long long d = gcd(abs(result.up), abs(result.down));   //约分
//		result.up /= d; result.down /= d;
//	}
//	return result;
//}
//fraction add(fraction a, fraction b){                        //分数加法运算
//	fraction result;
//	result.up = a.up*b.down + b.up*a.down;
//	result.down = a.down*b.down;
//	return result;
//}
//fraction minu(fraction a, fraction b){
//	fraction result;
//	result.up = a.up*b.down - b.up*a.down;
//	result.down = a.down*b.down;
//	return result;
//}
//fraction multi(fraction a, fraction b){
//	fraction result;
//	result.up = a.up*b.up;
//	result.down = a.down*b.down;
//	return result;
//}
//fraction divide(fraction a, fraction b){
//	fraction result;
//	result.up = a.up*b.down;
//	result.down = a.down*b.up;
//	return result;
//}
//void printresult(fraction a){                               //输出
//	a = reduction(a);
//	if (a.up < 0) cout << "(";
//	if (a.down == 1) cout << a.up;  //整数                        
//	else if (abs(a.up) > a.down)  //假分数化为带分数
//		cout << a.up / a.down << " " << abs(a.up) % a.down << "/" << a.down;
//	else cout << a.up << "/" << a.down; //真分数
//	if (a.up < 0) cout << ")";
//}
//
//int main(){
//	fraction a, b;
//	//scanf("%lld/%lld %lld/%lld", &a.up, &a.down, &b.up, &b.down);
//	while (cin >> a.up >> a.down >> b.up >> b.down)
//	{
//		printresult(a); cout << " + "; printresult(b); cout << " = "; printresult(add(a, b)); cout << '\n';
//		printresult(a); cout << " - "; printresult(b); cout << " = "; printresult(minu(a, b)); cout << '\n';
//		printresult(a); cout << " * "; printresult(b); cout << " = "; printresult(multi(a, b)); cout << '\n';
//		printresult(a); cout << " / "; printresult(b); cout << " = ";
//		if (b.up == 0) cout << "Inf" << endl;
//		else{ printresult(divide(a, b)); cout << endl; }
//	}
//	
//	return 0;
//}



//Pre-Post

//#include<iostream>
//#include<string> 
//using namespace std;
//int c[21][21], n;
//long long solve(string pre, string post){
//	long long sum = 1;
//	int num = 0, k = 0, i;
//	pre.erase(pre.begin());
//	post = post.substr(0, post.length() - 1);
//	while (k < pre.length())
//		for (i = 0; i<post.length(); i++)
//		if (pre[k] == post[i]){
//			sum *= solve(pre.substr(k, i - k + 1), post.substr(k, i - k + 1));
//			num++, k = i + 1; break;
//		}
//	sum *= c[num][n];
//	return sum;
//}
//void init(){
//	int i, j;
//	c[0][1] = c[1][1] = 1;
//	for (i = 2; i < 21; i++)
//		for (c[0][i] = 1, j = 1; j <= i; j++)
//			if (i == j) 
//				c[j][i] = 1;
//			else 
//				c[j][i] = c[j - 1][i - 1] + c[j][i - 1];
//}
//int main(){
//	string pre, post;
//	init();
//	while (cin >> n >> pre >> post&&n)
//		cout << solve(pre, post) << endl;
//}



//#include <iostream>
//#include <string>
//#include <cmath>
//#include <algorithm>
//#include <utility>
//
//using namespace std;
//
//long long factorial(int n) {
//	long long r = 1;
//	while (n > 1) {
//		r *= n;
//		--n;
//	}
//	return r;
//}
//
//long long combination(int n, int m) {
//	long long r = 1;
//	m = min(m, n - m);
//	for (int i = 0; i<m; i++) {
//		r *= n - i;
//	}
//	return r / factorial(m);
//}
//
//long long find_combination(int n, string a, string b) {
//	if (a.size() == 0) {
//		return 1;
//	}
//	long long r = 1;
//	int counter = 0;
//	for (int i = 0; i<a.size();) {
//		int idx = b.find(a[i]);
//		r *= find_combination(n, a.substr(i + 1, idx - i), b.substr(i, idx - i));
//		counter++;
//		i += idx - i + 1;
//	}
//	return r * combination(n, counter);
//}
//
//int main() {
//	int n;
//	string a, b;
//	while (cin >> n >> a >> b) {
//		cout << find_combination(n, a.substr(1), b.substr(0, b.size() - 1)) << endl;
//	}
//	return 0;
//}