#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

/**
* 920. 会议室
* 给定一系列的会议时间间隔，包括起始和结束时间[[s1,e1]，[s2,e2]，…(si < ei)，确定一个人是否可以参加所有会议。
* Definition of Interval:
* class Interval {
*     int start, end;
*     Interval(int start, int end) {
*         this->start = start;
*         this->end = end;
*     }
* }
*/
//class Interval{
//public:
//	int start, end;
//	Interval(int start, int end)
//	{
//		this->start = start;
//		this->end = end;
//	}
//};
//
//
//
//错误解答
//class Solution {
//public:
//	/**
//	* @param intervals: an array of meeting time intervals
//	* @return: if a person could attend all meetings
//	*/
//	bool canAttendMeetings(vector<Interval> &intervals) {
//		if (intervals.empty())
//			return true;
//		if (intervals.size() == 1)
//			return true;
//		// Write your code here
//		for (int i = 0; i < intervals.size(); ++i)
//		{
//			if (intervals[i].start <= intervals[i + 1].start)
//			{
//				if (intervals[i].end >= intervals[i + 1].end)
//					return false;
//				else
//					return true;
//			}
//			else
//			{
//				if (intervals[i].end <= intervals[i + 1].end)
//					return true;
//				else
//					return false;
//			}
//		}
//	}
//};
//正确解答
//bool comp(const Interval &a, const Interval &b)
//{
//	return a.start < b.start;
//}
//class Solution {
//public:
//	/**
//	* @param intervals: an array of meeting time intervals
//	* @return: if a person could attend all meetings
//	*/
//	bool canAttendMeetings(vector<Interval> &intervals) {
//		// Write your code here
//		if (intervals.empty() || intervals.size() == 1)
//			return true;
//		sort(intervals.begin(), intervals.end(), comp);
//		int len = intervals.size();
//		for (int i = 1; i < len; ++i)
//		{
//			//对于i,当si < ei-1的时候时间会产生冲突
//			if (intervals[i].start < intervals[i - 1].end)
//				return false;
//		}
//		return true;
//	}
//};


//int main()
//{
//	Solution s;
//	Interval it = Interval(0,2);
//	vector<Interval> intervals;
//	intervals.push_back(it);
//	cout << s.canAttendMeetings(intervals) << endl;
//	return 0;
//}


//多关键字排序
//解法一
//class Solution {
//public:
//	/**
//	* @param array: the input array
//	* @return: the sorted array
//	*/
//	vector<vector<int>> multiSort(vector<vector<int>> &array) {
//		// Write your code here
//		for (int i = 0; i < array.size() - 1; ++i)
//		{
//			for (int j = i + 1; j < array.size(); j++) {
//				if (array[i][1] < array[j][1]) {
//					swap(array[i], array[j]);
//				}
//				else if (array[i][1] == array[j][1]) {
//					if (array[i][0] > array[j][0]) {
//						swap(array[i], array[j]);
//					}
//				}
//			}
//		}
//		return array;
//	}
//};

//解法二
//class Solution {
//public:
//	/**
//	* @param array: the input array
//	* @return: the sorted array
//	*/
//
//	static bool mysort(vector<int> a, vector<int> b){
//		if (a[1] != b[1]){
//			return a[1] > b[1];	//成绩降序
//		}
//		else{
//			return a[0] < b[0];	//学号升序
//		}
//	}
//	vector<vector<int>> multiSort(vector<vector<int>> &array) {
//		// Write your code here
//		sort(array.begin(), array.end(), mysort);
//		return array;
//	}
//};

