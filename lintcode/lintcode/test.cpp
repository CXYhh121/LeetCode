#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	* @param A: an integer sorted array
	* @param target: an integer to be inserted
	* @return: An integer
	*/
	int searchInsert(vector<int> &A, int target) {
		// write your code here
		if (A.empty() || A[0] > target)
			return 0;
		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] == target)
				return i;
			if (A[i] < target && A[i + 1] > target)
			{
				return i + 1;
			}
		}
		return A.size();
	}
};

int main()
{
	Solution s;
	int N;
	
	while (cin >> N)
	{
		vector<int> A(N);
		for (int i = 0; i < N; ++i)
		{
			cin >> A[i];
		}
		int target;
		cin >> target;
		s.searchInsert(A,target);
	}
	
	return 0;
}