//Leetcode 1221 分割平衡字符串
//在一个「平衡字符串」中，'L' 和 'R' 字符的数量是相同的。
//给出一个平衡字符串 s，请你将它分割成尽可能多的平衡字符串。
//返回可以通过分割得到的平衡字符串的最大数量。
//解法一
#include <iostream>
#include <string>

using namespace std;
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

int main()
{
    string s;
    while(cin >> s)
    {
        Solution so;
        int ret = so.balancedStringSplit(s);
        cout << ret << endl;
    }
    return 0;
}
//解法二
//class Solution {
//public:
//    int balancedStringSplit(string s)
//	{
//		int res = 0;
//		int len = s.length();
//		stack<int> _s;
//		for (int i = 0; i < len; i++)
//		{
//			if (_s.empty() || _s.top() == s[i]) _s.push(s[i]);
//			else _s.pop();
//			if (_s.empty()) res++;
//		}
//		return res;
//	}
//};
//
//
//
////LeetCode 226 翻转二叉树
//
////利用前序遍历
//class Solution {
//        // 先序遍历--从顶向下交换
//        public TreeNode invertTree(TreeNode root) {
//            if (root == null) return null;
//            // 保存右子树
//            TreeNode rightTree = root.right;
//            // 交换左右子树的位置
//            root.right = invertTree(root.left);
//            root.left = invertTree(rightTree);
//            return root;
//        }
//    }
//
////利用中序遍历
//class Solution {
//    public TreeNode invertTree(TreeNode root) {
//            if (root == null) return null;
//            invertTree(root.left); // 递归找到左节点
//            TreeNode rightNode= root.right; // 保存右节点
//            root.right = root.left;
//            root.left = rightNode;
//            // 递归找到右节点 继续交换 : 因为此时左右节点已经交换了,所以此时的右节点为root.left
//            invertTree(root.left); 
//    }
//}
//
////利用后序遍历
// class Solution {
//        public TreeNode invertTree(TreeNode root) {
//            // 后序遍历-- 从下向上交换
//            if (root == null) return null;
//            TreeNode leftNode = invertTree(root.left);
//            TreeNode rightNode = invertTree(root.right);
//            root.right = leftNode;
//            root.left = rightNode;
//            return root;
//        }
//    }
//
////利用层次遍历
//   class Solution {
//        public TreeNode invertTree(TreeNode root) {
//            // 层次遍历--直接左右交换即可
//            if (root == null) return null;
//            Queue<TreeNode> queue = new LinkedList<>();
//            queue.offer(root);
//            while (!queue.isEmpty()){
//                TreeNode node = queue.poll();
//                TreeNode rightTree = node.right;
//                node.right = node.left;
//                node.left = rightTree;
//                if (node.left != null){
//                    queue.offer(node.left);
//                }
//                if (node.right != null){
//                    queue.offer(node.right);
//                }
//            }
//            return root;
//        }
//   };
//
//
////LeetCode 226 翻转二叉树
//class Solution {
//public:
//    TreeNode* invertTree(TreeNode* root) {
//        if(root==nullptr)
//            return root;//边界条件 空树直接返回
//        queue<TreeNode*> q;//辅助队列实现层序遍历
//        q.push(root);//根节点入队列
//        while(!q.empty())//遍历所有节点
//        {
//            TreeNode* t=q.front();//当前节点
//            q.pop();
//            TreeNode* temp=t->left;//保存左节点
//            t->left=t->right;//修改左节点
//            t->right=temp;//修改右节点
//            if(t->left!=nullptr)
//                q.push(t->left);//非空左子节点入队列
//            if(t->right!=nullptr)
//                q.push(t->right);//非空右子节点入队列
//        }
//        return root;//翻转完成
//    }
//};





