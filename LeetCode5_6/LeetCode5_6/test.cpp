#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

//int a = 0;
//class someClass{
//	int b;
//	static int c;
//};
//int main(){
//	int d = 0;
//	someClass *p = new someClass();
//	return 0;
//}


//enum string{
//	x1,
//	x2,
//	x3 = 10,
//	x4,
//	x5,
//} x;
//
//int main()
//{
//	cout << x << endl;
//	return 0;
//}



//LeetCode67题二进制求和
//下面这种写法既巧妙又简洁，用了两个指针分别指向a和b的末尾，然后每次取出一个字符，转为数字，
//若无法取出字符则按0处理，然后定义进位carry，初始化为0，
//将三者加起来，对2取余即为当前位的数字，对2取商即为当前进位的值，
//记得最后还要判断下carry，如果为1的话，要在结果最前面加上一个1。
class Solution {
public:
	string addBinary(string a, string b) {
		string res = "";
		int m = a.size() - 1, n = b.size() - 1, carry = 0;
		while (m >= 0 || n >= 0) {
			int p = m >= 0 ? a[m--] - '0' : 0;
			int q = n >= 0 ? b[n--] - '0' : 0;
			int sum = p + q + carry;
			res = to_string(sum % 2) + res;
			carry = sum / 2;
			}
		return carry == 1 ? "1" + res : res;	
		}
		
};