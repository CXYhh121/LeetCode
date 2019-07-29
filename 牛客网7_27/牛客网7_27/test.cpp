#define _CRT_SECURE_NO_WARNINGS

//Äæ²¨À¼±í´ïÊ½
#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		vector<string> tokens;
		string str;
		for (int i = 0; i < num; i++)
		{
			cin >> str;
			tokens.push_back(str);
		}
		stack<int> st;

		for (auto e : tokens)
		{
			if (e == "+")
			{
				int right = st.top();
				st.pop();
				int left = st.top();
				st.pop();

				st.push(left + right);

			}

			else if (e == "-")
			{
				int right = st.top();
				st.pop();
				int left = st.top();
				st.pop();

				st.push(left - right);
			}
			else if (e == "*")
			{
				int right = st.top();
				st.pop();
				int left = st.top();
				st.pop();

				st.push(left * right);

			}
			else if (e == "/")
			{
				int right = st.top();
				st.pop();
				int left = st.top();
				st.pop();

				st.push(left / right);

			}
			else
			{
				st.push(atoi(e.c_str()));
			}

		}
		cout << st.top() << endl;
	}
	return 0;
}