/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/balanced-binary-tree
@Language: C++
@Datetime: 17-06-05 13:39
*/

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: True if this Binary tree is Balanced, or false.
     */
     
    //判断树的高度，但是添加了条件：如果出现了不平衡的情况，则返回-1
    int depth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int left = depth(root->left);
        int right = depth(root->right);
        if (left == -1 || right == -1 || abs(left-right) > 1)  //如果出现了不平衡的情况，则返回-1
            return -1;
        return max(left, right) + 1;  //当前节点的深度=其孩子所在深度的最大值+1
    }
    
    bool isBalanced(TreeNode *root) {
        // write your code here
        if(depth(root)==-1)
            return false;
        else
            return true;
    }
};