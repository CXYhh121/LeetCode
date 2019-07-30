#define _CRT_SECURE_NO_WARNINGS

//LeetCode82题删除链表中的重复元素II非递归求解
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
//class Solution {
//public:
//	ListNode* deleteDuplicates(ListNode* head) {
//		ListNode* prev = new ListNode(0);
//		prev->next = head;
//		head = prev;
//		ListNode* cur;
//		ListNode* next;
//		while (prev->next)
//		{
//			cur = prev->next;
//			next = cur;
//			while (next->next && cur->val == next->next->val)
//			{
//				next = next->next;
//			}
//			if (cur == next)
//				prev = prev->next;
//			else
//				prev->next = next->next;
//		}
//		return head->next;
//	}
//};

//递归求解
//class Solution {
//public:
//	// 递归
//	ListNode* deleteDuplicates(ListNode* head)
//	{
//		if (head == nullptr || head->next == nullptr)
//			return head;
//		ListNode *cur = head->next;
//		if (head->val == cur->val) {
//			while (cur != nullptr && cur->val == head->val)
//				cur = cur->next;
//			return deleteDuplicates(cur);
//		}
//		head->next = deleteDuplicates(cur);
//		return head;
//	}
//};


