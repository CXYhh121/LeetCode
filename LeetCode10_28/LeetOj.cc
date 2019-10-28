//LeetCode 182 查找重复的电子邮箱
//编写一个 SQL 查询，查找 Person 表中所有重复的电子邮箱。
//Write your MySQL query statement below

//-- 解法1
select email from person group by email having count(email)>1

//--解法2
select email from (select count(1) as t,email from person group by email)r  where r.t>1;

//--解法3
select distinct(p1.Email) from Person p1  
join Person  p2 on p1.Email = p2.Email AND p1.Id!=p2.Id



//Leetcode 1221 分割平衡字符串
//在一个「平衡字符串」中，'L' 和 'R' 字符的数量是相同的。
//给出一个平衡字符串 s，请你将它分割成尽可能多的平衡字符串。
//返回可以通过分割得到的平衡字符串的最大数量。
class Solution {
public:
    int balancedStringSplit(string s) {
        int balanceCount=0;
        int toolCount=0;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='L')
                ++toolCount;
            else
                --toolCount;
            if(toolCount==0)
                ++balanceCount;
        }
        return balanceCount;
    }
};


//LeetCode 1021 删除最外层的括号
//对 S 进行原语化分解，删除分解中每个原语字符串的最外层括号，返回 S 。
class Solution {
public:
	string removeOuterParentheses(string S) {
		string res = "";
		stack<char> mystack;
		for (int i = 0; i < S.size(); i++) {
			if (S[i] == ')')
				mystack.pop();
			if (!mystack.empty())
				res+=S[i];
			if (S[i] == '(')
				mystack.push('(');

		}
		return res;
	}
};
