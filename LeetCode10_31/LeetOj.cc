#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//Leetcode 617 合并二叉树
//给定两个二叉树，想象当你将它们中的一个覆盖到另一个上时，两个二叉树的一些节点便会重叠。

//你需要将他们合并为一个新的二叉树。合并的规则是如果两个节点重叠，
//那么将他们的值相加作为节点合并后的新值，否则不为 NULL 的节点将直接作为新二叉树的节点。
//class Solution {
//public:
//    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
//        if(t1 == NULL && t2 == NULL)
//            return NULL;
//        //先处理根结点
//        TreeNode* root = new TreeNode((t1 == 0 ? 0 : t1->val) + (t2 == 0 ? 0 : t2->val));
//        //再递归处理两棵树的左右子树
//        root->left = mergeTrees((t1 == NULL ? NULL : t1->left),(t2 == NULL ? NULL : t2->left));
//        root->right = mergeTrees((t1 == NULL ? NULL : t1->right),(t2 == NULL ? NULL : t2->right));
//        return root;
//    }
//};


//LeetCode 461 汉明距离
//两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。
//给出两个整数 x 和 y，计算它们之间的汉明距离。
//解法一
class Solution {
public:
    int hammingDistance(int x, int y)
    {
        int z = x ^ y;
        int sum = 0;
        while (z)
        {
            sum += z & 1;
            z = z >> 1;
        }
        return sum;
    }
};

int main()
{
    int x,y;
    while(cin >> x >> y)
    {
        Solution s;
        int ret = s.hammingDistance(x,y);
        cout << ret << endl;
    }
    return 0;
}

//解法二
//class Solution {
//public:
//    int hammingDistance(int x, int y) {
//		uint32_t z = x ^ y;
//		z = (z & 0x55555555) + ((z >> 1) & 0x55555555);
//		z = (z & 0x33333333) + ((z >> 2) & 0x33333333);
//		z = (z & 0x0f0f0f0f) + ((z >> 4) & 0x0f0f0f0f);
//		z = (z & 0x00ff00ff) + ((z >> 8) & 0x00ff00ff);
//		z = (z & 0x0000ffff) + ((z >> 16) & 0x0000ffff);
//		return (int)z;
//	}
//};


//LeetCode 804 唯一的摩尔斯密码词
//给定一个单词列表，每个单词可以写成每个字母对应摩尔斯密码的组合。
//例如，"cab" 可以写成 "-.-..--..."，(即 "-.-." + "-..." + ".-"字符串的结合)。我们将这样一个连接过程称作单词翻译。
//返回我们可以获得所有词不同单词翻译的数量。
//class Solution {
//public:
//    string translate(string& words)
//    {   
//        string res = {};   
//        vector<string> mos = {".-","-...","-.-.","-..",".","..-.","--.","....",
//            "..",".---","-.-",".-..","--","-.","---",".--.","--.-",
//            ".-.","...","-","..-","...-",".--","-..-","-.--","--.."};  
//        for(size_t i=0;i<words.size();i++)  
//        {        
//            res.append(mos[int(words[i])-97]);    
//        }    
//        return res;
//    }
//    int uniqueMorseRepresentations(vector<string>& words) {
//        set<string> res;    
//        for(size_t i=0;i<words.size();i++)    
//        {        
//            res.insert(translate(words[i]));    
//        }    
//        return res.size();   
//    }
//};
