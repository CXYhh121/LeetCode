#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

/**
* 920. ������
* ����һϵ�еĻ���ʱ������������ʼ�ͽ���ʱ��[[s1,e1]��[s2,e2]����(si < ei)��ȷ��һ�����Ƿ���Բμ����л��顣
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
//������
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
//��ȷ���
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
//			//����i,��si < ei-1��ʱ��ʱ��������ͻ
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


//��ؼ�������
//�ⷨһ
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

//�ⷨ��
//class Solution {
//public:
//	/**
//	* @param array: the input array
//	* @return: the sorted array
//	*/
//
//	static bool mysort(vector<int> a, vector<int> b){
//		if (a[1] != b[1]){
//			return a[1] > b[1];	//�ɼ�����
//		}
//		else{
//			return a[0] < b[0];	//ѧ������
//		}
//	}
//	vector<vector<int>> multiSort(vector<vector<int>> &array) {
//		// Write your code here
//		sort(array.begin(), array.end(), mysort);
//		return array;
//	}
//};

