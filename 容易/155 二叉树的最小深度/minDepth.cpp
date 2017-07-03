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
     * @return: An integer
     */
    int minDepth(TreeNode *root) {
        // write your code here
        int depth=0;
        if(root!=NULL)
        {
            ++depth;
            int leftDepth,rightDepth;
            leftDepth=minDepth(root->left);
            rightDepth=minDepth(root->right);
            if(leftDepth<rightDepth)
                depth+=leftDepth;
            else
                depth+=rightDepth;
        }
        return depth;    
    }
};