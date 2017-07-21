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
        //法2：递归
        if(root==NULL)
        {
            root=node;
            return root;
        }
        
        if(node->val < root->val)
        {
            if(root->left==NULL)
                root->left=node;
            else
                root->left=insertNode(root->left, node);
        }
        else
        {
            if(root->right==NULL)
                root->right=node;
            else
                root->right=insertNode(root->right, node);
        }
        return root;
    }
};