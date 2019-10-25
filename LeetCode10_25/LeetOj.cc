//LeetCode 6 Z字形变换
//将一个给定字符串根据给定的行数，以从上往下、从左到右进行 Z 字形排列。
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    string convert(string s, int numRows) {
//        vector<string> temp(numRows);
//        string res;
//        if(s.empty() || numRows < 1) return res;
//        if(numRows == 1) return s;
//        for(int i = 0; i < s.size(); i++){
//            int ans = i / (numRows-1);
//            int cur = i % (numRows-1);
//            if(ans % 2 == 0){  //结果为偶数或0
//                temp[cur].push_back(s[i]); //按余数正序保存
//            }
//            if(ans % 2 != 0){  //结果为奇数
//                temp[numRows-cur-1].push_back(s[i]); //按余数倒序保存
//            }
//        }
//       for(int i = 0; i < temp.size(); i++){
//               res += temp[i];
//        }
//        return res;
//    }
//};
//
//int main()
//{
//    string str;
//    while(cin >> str)
//    {
//        int num;
//        cin >> num;
//        Solution s;
//        string result = s.convert(str,num);
//        cout << result << endl;
//    }
//    return 0;
//}



//LeetCode 7 整数反转
//给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
//解法一
class Solution {
public:
    int reverse(int x) {
        long int ret = 0;
        while(x)
        {
            ret = ret * 10 + x % 10;
            x = x/10;
        }
        if((int)ret != ret)
            return 0;
        else
            return (int)ret;
    }
};

//解法二
//用数学思维来写，这个题挺简单的
class Solution {
        public static int reverse(int x) {
       //用数学思维来看
        int rpc = 0;
        while (x != 0)
        {
            int newrpc = rpc*10 + x%10;
            if ((newrpc - x%10)/10 != rpc) {return 0;}
            rpc = newrpc;
            x = x/10;
        }
        return rpc;
    }
} 


