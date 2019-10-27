//LeetCode 771 宝石与石头
//给定字符串J 代表石头中宝石的类型，和字符串 S代表你拥有的石头。 
//S 中每个字符代表了一种你拥有的石头的类型，你想知道你拥有的石头中有多少是宝石。
#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
   int numJewelsInStones(string J, string S) 
    {
        int amount[52] = { 0 };
        int ans = 0;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] >= 'a')
                amount[S[i] - 'a']++;
            else
                amount[S[i] - 'A' + 26]++;
        }
        for (int i = 0; i < J.size(); i++)
        {
            if (J[i] >= 'a')
                ans += amount[J[i] - 'a'];
            else
                ans += amount[J[i] - 'A' + 26];
        }
        return ans;
    }
};

int main()
{
    string J,S;
    while(cin >> J >> S)
    {
        Solution s;
        int ret = s.numJewelsInStones(J,S);
        cout << ret << endl;
    }
    return 0;
}

//LeetCode 1108 IP地址无效化
//给你一个有效的 IPv4 地址 address，返回这个 IP 地址的无效化版本。
//所谓无效化 IP 地址，其实就是用 "[.]" 代替了每个 "."。
//解法一
//class Solution {
//public:
//    string defangIPaddr(string address) 
//    {
//        for(int i = address.size(); i >= 0; i--)
//        {
//            if(address[i] == '.')
//            {
//                address.replace(i, 1, "[.]");
//            }
//        }
//        return address;
//    }
//};
//
////解法二
//class Solution {
//public:
//    string defangIPaddr(string address) {
//    string ip_change = "";
//    for(auto &s:address)
//        if(s=='.')
//            ip_change+="[.]";
//        else
//            ip_change+=s;
//    return ip_change;
//    }
//    
//};
//
