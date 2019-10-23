//LeetCode 4
//给定两个大小为 m 和 n 的有序数组 nums1 和 nums2。
//请你找出这两个有序数组的中位数，并且要求算法的时间复杂度为 O(log(m + n))。
//解法一
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total_size = nums1.size()+nums2.size();
        vector<int> merged(total_size);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),merged.begin());
        if(total_size%2)
            return merged[total_size/2];
        else
            return (double)(merged[total_size/2]+merged[total_size/2-1])/2;
    }
};


//LeetCode5 最长回文子串
//给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为 1000。
//C++，动态规划，T(n) = O(n^2)，S(n) = O(n)
//解法一
class Solution {
public:
    string longestPalindrome(string str) {
        const int n = str.size();
        if(n < 2) return str;
        int s = 0, e = 0;
        int dp[n] = {0, };
        for(int j = 0; j < n; ++j){
            for(int i = 0; i < j; ++i){
                if(!(dp[i] = dp[i + 1] || str[i] != str[j]) && (e - s) <= (j - i)) 
                    s = i, e = j;
            }
        }
        return str.substr(s, e - s + 1);
    }
};

//解法二
//
class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty() || s.size() == 1)
            return s;
        int start(0), end(0);
        int maxLen(0);
        for (int i = 0; i < s.size(); i++){
            int len1 = findSameLength(s, i, i);
            int len2 = findSameLength(s, i, i + 1);
            if (maxLen < max(len1, len2)){
                maxLen = max(len1, len2);
                start = i - (maxLen - 1) / 2;
                end = i + maxLen / 2;
            }
        }
        return s.substr(start, end - start + 1);
    }
private:
    int findSameLength(string &s, int left, int right){
        while (left >= 0 && right < s.size() && s.at(left) == s.at(right))
            left--, right++;
        return right - left - 1;
    }
};



