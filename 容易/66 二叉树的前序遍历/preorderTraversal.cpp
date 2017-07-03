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
     * @return: Preorder in vector which contains node values.
     */
    vector<int> preorderTraversal(TreeNode *root) {
        // write your code here
        //非递归实现
        vector<int> result;
        stack<TreeNode*> tempStack;
        while (!tempStack.empty() || root != NULL) {
            if (root != NULL) {
                result.push_back(root->val);
                tempStack.push(root);
                root = root->left;
            }
            else {
                root = tempStack.top();
                tempStack.pop();
                root = root->right;
            }
        }
        return result;
    }
};
