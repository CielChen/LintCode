/*-------------------------------
Author: Ciel 
Date: 2017.04.25
�㷨�����������������ڵ� 
--------------------------------------*/
class Solution {
public:
    /**
     * @param root the root of binary tree
     * @return the max node
     */
    /*ע��LintCode������������ݽṹ����
    struct TreeNode{
        TreeNode* root;
        TreeNode* left;
        TreeNode* right;
        int val;
    };
    */
    int max=INT_MIN;
    TreeNode* maxNode(TreeNode* root) {
        // Write your code here
        if(root==NULL)  
            return NULL;
        
        TreeNode *left, *right;
        left=root;
        right=root;
        if(root->left!=NULL)
            left=maxNode(root->left);
        if(root->right!=NULL)
            right=maxNode(root->right);
        
        if(left->val > root->val)
            root->val=left->val;
        if(right->val > root->val)
            root->val=right->val;
        return root;
            
    }
};