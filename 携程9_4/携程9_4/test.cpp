#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;

class ListNode {
public:
	int val;
	ListNode* next;
	ListNode(int val){
		this->val = val;
		this->next = NULL;
	};
};

/*请完成下面这个函数，实现题目要求的功能
******************************开始写代码******************************/
void bubbleSort(ListNode* mylist)
{
	if ((mylist->next == NULL) || (mylist->next->next == NULL))
	{
		return;
	}

	ListNode *head, *pre, *cur, *next, *end, *temp;
	head = mylist;
	end = NULL;
	//从链表头开始将较大值往后沉
	while (head->next != end)
	{
		for (pre = head, cur = pre->next, next = cur->next; next != end; pre = pre->next, cur = cur->next, next = next->next)
		{
			//相邻的节点比较
			if (cur->val > next->val)
			{
				cur->next = next->next;
				pre->next = next;
				next->next = cur;
				temp = next;
				next = cur;
				cur = temp;
			}
		}
		end = cur;
	}
}
ListNode* partition(ListNode* head, int m) {
	if (head == NULL || m <= 1)
		return head;
	ListNode* cur = head;

	while (cur || m)
	{
		cur = cur->next;
		m--;
	}
	return head;

}
/******************************结束写代码******************************/


int main() {
	ListNode* head = NULL;
	ListNode* node = NULL;
	int m;
	cin >> m;
	int v;
	while (cin >> v){
		if (head == NULL){
			node = new ListNode(v);
			head = node;
		}
		else{
			node->next = new ListNode(v);
			node = node->next;
		}
	}
	head = partition(head, m);
	if (head != NULL){
		cout << head->val;
		node = head->next;
		delete head;
		head = node;
		while (head != NULL){
			cout << "," << head->val;
			node = head->next;
			delete head;
			head = node;
		}
	}
	cout << endl;
	return 0;
}
