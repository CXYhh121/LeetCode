//LeetCode 7 
//请你来实现一个 atoi 函数，使其能将字符串转换成整数。
//
#include <iostream>
#include <string>
#include <algorithm>
#include <limits.h>

using namespace std;

class Solution {
public:
	int myAtoi(string str) {
		int i = 0;//位置
		long long res = 0;//输出结果
		int bol = 1;//符号
		while (i < str.size() && str[i] == ' ')++i;//找到第一个非空格的字符
		if (i == str.size())return 0;
		if (str[i] == '-') { bol = -1; ++i; }//运算符正负号
		else if (str[i] == '+') { bol = 1; ++i; }
		while (i < str.size() && str[i] >= '0' && str[i] <= '9') {
			res = res * 10 + str[i++] - '0';
			if (res >= 2147483648) {
				if (bol == 1)return INT_MAX;
				else return INT_MIN;
			}
		}
		return res * bol;
	}
};

int main()
{
    string str;
    while(cin >> str)
    {
        Solution s;
        int ret = s.myAtoi(str);
        cout << ret << endl;
    }
    return 0;
}

//LeetCode 29 两数相除
//排名前几的，使用的位运算思想很赞。每次都从2^0+2^1+...开始逼近，
//当快要接近被除数时。再从2^0+2^1+...开始逼近。直到不能更近为止。
//dividend = divisor*2^2 + divisor*2^1 + divisor*2^0
//ans = 2^2 + 2^1 + 2^0
//class Solution {
//public:
//    int divide(int dividend, int divisor) {
//        long ans = 0, up = std::fabs(dividend), down = std::fabs(divisor);
//        while(up >= down){
//            long count = 1, base = down;
//            while(up > (base << 1)){
//                count <<= 1;
//                base <<= 1;
//            }
//            ans += count;
//            up -= base;
//        }
//        ans = ((dividend < 0)^(divisor < 0)) ? -ans : ans;
//        return (ans > INT_MAX || ans < INT_MIN) ? INT_MAX : ans;
//    }
//};
//


//LeetCode LCP 1 猜数字
//class Solution {
//public:
//    int game(vector<int>& guess, vector<int>& answer) {
//        int count = 0;
//        for(int i = 0;i < guess.size();++i)
//        {
//            if(guess[i] == answer[i])
//                count++;
//        }
//        return count;
//    }
//};
//
////LeetCode LCP 1 猜数字
////解法二
//class Solution {
//public:
//    int game(vector<int>& g, vector<int>& a) {
//        return int(g[0]==a[0]) + int(g[1]==a[1]) + int(g[2]==a[2]);
//    }
//};
