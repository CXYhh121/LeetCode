#define _CRT_SECURE_NO_WARNINGS


//�ظ�N�ε�Ԫ�ؽⷨһ
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

////�ظ�N�ε�Ԫ�ؽⷨһ
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


//���仰�в������ĵ���
//class Solution {
//public:
//	vector<string> uncommonFromSentences(string A, string B) {
//		A += ' ';
//		A += B; //��A B�ַ�����������
//
//		unordered_map<string, int> countmap;
//		vector<string> v;
//		size_t start = 0;
//		size_t pos = 0;
//		do
//		{
//			pos = A.find(' ', start);
//			countmap[A.substr(start, pos - start)]++;//ȥÿ�����ʣ���ͳ�ƴ���
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


//�����ظ�Ԫ��LeetCode217��
//�ⷨһ��
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

//�ⷨ����
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



//�ⷨ����
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


