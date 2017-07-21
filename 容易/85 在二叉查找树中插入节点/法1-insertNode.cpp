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
     * @param root: The root of the binary search tree.
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
    TreeNode* insertNode(TreeNode* root, TreeNode* node) {
        // write your code here
        //法1：非递归
        if(root==NULL)  //为空则把node赋值给root  
        {
            root=node;
            return root;
        }
        TreeNode *head=root;
        while(head!=NULL)
        {
            if(node->val < root->val)  //比root节点小，则判断左边 
            {
                if(root->left==NULL)  //无左节点，把node赋值给root->left 
                {
                    root->left=node;
                    return head;
                }
                else  //否则把root->left赋值给root,继续判断  
                    root=root->left;
            }
            else
            {
                if(root->right==NULL) //无右节点，把node赋值给root->right
                {
                    root->right=node;
                    return head;
                }
                else  //否则把root->right赋值给root,继续判断 
                    root=root->right;
            }
        }
    }
};