//两数之和LeetCode1
//给定一个整数数组 nums 和一个目标值 target，
//请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
//解法一
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0;i < nums.size();++i)
        {
            for(int j = i + 1;j < nums.size();++j)
            {
                if(nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};


//解法二
class Solution { // 两遍hash的方法
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> a; // 提供一对一的hash
        for (int i = 0; i < nums.size(); i++) { // 先初始化一遍hash表
            a.insert(map<int,int>:: value_type(nums[i], i));
        }
        for (int i = 0; i < nums.size(); i++) {
            if (a.count(target - nums[i]) > 0 && a[target - nums[i]] != i) {
                // 判断是否找到目标元素且目标元素不能是本身               
                return {i, a[target-nums[i]]};
            }
        }
        return {0, 0};
    };
};


//解法三
class Solution {
public:  
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> hash;//由于unorder_map速度要比map快所以选择无序哈希表  
        for(int i=0; i < nums.size();++i){
            int another = target - nums[i];
            if(hash.count(another)){  
                res = vector<int>({hash[another], i});
                return res;
            }
            hash[nums[i]] = i;
        }
        return res;
    }
};


//LeetCode3 无重复字符的最长子串
//给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
//解法一
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int  size,i=0,j,k,max=0;
        size = s.size();
        for(j = 0;j<size;j++){
            for(k = i;k<j;k++)
                if(s[k]==s[j]){
                    i = k+1;
                    break;
                }
            if(j-i+1 > max)
                max = j-i+1;
        }
        return max;
    }
};

//解法二
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> hash;/无序表时间复杂度低
        int maxlen = 0;
        int left = 0;    //左边界
        for(int i = 0;i < s.size();i++)
        {
            if(hash.count(s[i]) != 0 && hash[s[i]]>= left)   
            {
                left = hash[s[i]];
            }
            else  
            {
                maxlen  = max(maxlen,i - left + 1);
            }
            hash[s[i]] = i+1;
        }
        return maxlen;
    }
};



