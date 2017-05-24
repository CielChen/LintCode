/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/invert-binary-tree
@Language: C++
@Datetime: 17-05-24 06:23
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
     * @param root: a TreeNode, the root of the binary tree
     * @return: nothing
     */
    void invertBinaryTree(TreeNode *root) {
        // write your code here
        //因为函数没有返回值，所以只能非递归实现
        if(root==NULL)  
            return;  
  
        queue<TreeNode*> que;  
        que.push(root);  
        while(!que.empty()){  
            TreeNode* pNode = que.front();  
            que.pop();  
          
            //比层序遍历多的地方：直接交换左右孩子即可  
            TreeNode* pLeft = pNode->left;  
            pNode->left = pNode->right;  
            pNode->right = pLeft;  
  
            if(pNode->left != NULL)  
                que.push(pNode->left);  
            if(pNode->right != NULL)  
                que.push(pNode->right);  
  
        }  
    }
};