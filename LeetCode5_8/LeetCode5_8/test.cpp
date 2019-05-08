#define _CRT_SECURE_NO_WARNINGS


//重复N次的元素解法一
//class Solution {
//public:
//	int repeatedNTimes(vector<int>& A) {
//		unordered_map<int, int> countmap;
//		for (auto& e : A)
//		{
//			countmap[e]++;
//		}
//
//		for (auto& kv : countmap)
//		{
//			if (kv.second >= A.size() / 2)
//				return kv.first;
//		}
//		return 0;
//	}
//};

////重复N次的元素解法一
//class Solution {
//public:
//	int repeatedNTimes(vector<int>& A) {
//		unordered_set<int> us;
//		for (auto e : A) {
//			auto ret = us.insert(e);
//			if (ret.second == false)
//				return e;
//		}
//		return -1;
//	}
//};


//两句话中不常见的单词
//class Solution {
//public:
//	vector<string> uncommonFromSentences(string A, string B) {
//		A += ' ';
//		A += B; //将A B字符串进行连接
//
//		unordered_map<string, int> countmap;
//		vector<string> v;
//		size_t start = 0;
//		size_t pos = 0;
//		do
//		{
//			pos = A.find(' ', start);
//			countmap[A.substr(start, pos - start)]++;//去每个单词，并统计次数
//			start = pos + 1;
//		} while (pos < A.size());
//
//		for (auto& kv : countmap)
//		{
//			if (kv.second == 1)
//				v.push_back(kv.first);
//		}
//		return v;
//	}
//};


//存在重复元素LeetCode217题
//解法一：
//
//class Solution {
//public:
//	bool containsDuplicate(vector<int>& nums) {
//		unordered_map<int, int> countmap;
//		for (auto& e : nums)
//		{
//			countmap[e]++;
//		}
//
//		for (auto& kv : countmap)
//		{
//			if (kv.second > 1)
//				return true;
//		}
//		return false;
//	}
//};

//解法二：
//```
//class Solution {
//public:
//	bool containsDuplicate(vector<int>& nums) {
//		unordered_set<int> us;
//		for (auto& e : nums)
//		{
//			auto ret = us.insert(e);
//			if (ret.second == false)
//				return true;
//		}
//		return false;
//	}
//};



//解法三：
//class Solution {
//public:
//	bool containsDuplicate(vector<int>& nums) {
//		if (nums.empty())
//			return false;
//		sort(nums.begin(), nums.end());
//		for (int i = 0; i<nums.size() - 1; i++)
//		{
//			if (nums[i] == nums[i + 1])
//				return true;
//		}
//		return false;
//	}
//};


