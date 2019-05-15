#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
using namespace std;


//void f(char* c, char d)
//{
//	*c = *c + 1;
//	d = d + 1;
//	cout << *c << d;
//}
//void main(){
//	char a = 'A', b = 'a';
//	f(&b, a);
//	cout << a << b << endl;
//}


//int main()
//{
//	char *s = "\ta\017bc";
//	cout << strlen(s) << endl;
//	return 0;
//}

//剑指offer第一题查找数组
//class Solution {
//public:
//	bool Find(int target, vector<vector<int> > array) {
//		for (int i = 0; i < array.size(); ++i)
//		{
//			for (int j = 0; j<array[i].size(); ++j)
//			{
//				if (array[i][j] == target)
//					return true;
//			}
//		}
//		return false;
//	}
//};

//剑指offer第二题替换字符串空格解法一
//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		string s(str);
//		int i = 0;
//		while ((i = s.find(' ', i))>-1){
//			s.erase(i, 1);
//			s.insert(i, "%20");
//
//		}
//		auto ret = s.c_str();
//		strcpy(str, ret);
//	}
//};



//剑指offer第二题解法二
//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		int count = 0;
//		for (int i = 0; i<length; i++){
//			if (str[i] == ' ')
//				count++;
//		}
//		for (int i = length - 1; i >= 0; i--){
//			if (str[i] != ' '){
//				str[i + 2 * count] = str[i];
//			}
//			else{
//				count--;
//				str[i + 2 * count] = '%';
//				str[i + 2 * count + 1] = '2';
//				str[i + 2 * count + 2] = '0';
//			}
//		}
//	}
//};


//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		string s(str);
//		int pos = 0;
//
//		while((pos = s.find(' ', pos))>-1)
//		{
//			s.erase(pos, 1);
//			s.insert(pos, "%20");
//		}
//		auto ret = s.c_str();
//		strcpy(str, ret);
//	}
//};
//
//int main()
//{
//	Solution s;
//	char* str = "we are lucky";
//	s.replaceSpace(str, sizeof(str));
//	return 0;
//}


//剑指offer第三题从尾到头打印链表
//class Solution {
//public:
//	ListNode* ReverseList(ListNode* pHead) {
//		ListNode* newhead = NULL;
//		ListNode* cur = pHead;
//
//		while (cur)
//		{
//			ListNode* next = cur->next;
//
//			cur->next = newhead;
//			newhead = cur;
//			cur = next;
//		}
//		return newhead;
//	}
//	vector<int> printListFromTailToHead(ListNode* head) {
//		ListNode* newhead = ReverseList(head);
//		vector<int> v;
//		ListNode* cur = newhead;
//		while (cur)
//		{
//			v.push_back(cur->val);
//			cur = cur->next;
//		}
//		return v;
//	}
//};


//leetcode61题
//class Solution {
//public:
//	ListNode* rotateRight(ListNode* head, int k) {
//		if (head == NULL || head->next == NULL)
//			return head;
//		int len = 1;
//		ListNode *cur = head;
//		while (cur->next != NULL){
//			cur = cur->next;
//			++len;
//		}
//		cur->next = head;
//		int walk = len - k%len;
//		while (walk>0){
//			cur = cur->next;
//			walk--;
//		}
//		head = cur->next;
//		cur->next = NULL;
//		return head;
//	}
//};

//LeetCode92题反转链表II
//class Solution {
//public:
//	ListNode *reverseBetween(ListNode *head, int m, int n) {
//		ListNode *dummy = new ListNode(-1);
//		dummy->next = head;
//		ListNode *cur = dummy;
//		ListNode *pre, *front, *last;
//		for (int i = 1; i <= m - 1; ++i) 
//			cur = cur->next;
//		pre = cur;
//		last = cur->next;
//		for (int i = m; i <= n; ++i) {
//			cur = pre->next;
//			pre->next = cur->next;
//			cur->next = front;
//			front = cur;	
//			}
//		cur = pre->next;
//		pre->next = front;
//		last->next = cur;
//		return dummy->next;
//		}
//		
//};