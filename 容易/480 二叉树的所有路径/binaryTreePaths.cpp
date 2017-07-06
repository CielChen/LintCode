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
     * @param root the root of the binary tree
     * @return all root-to-leaf paths
     */
    void printPath(TreeNode* root, vector<string> &res, string path)
    {
        if(root->left==NULL && root->right==NULL)  //叶子
        {
            res.push_back(path);
            return ;
        }
        if(root->left!=NULL)
            printPath(root->left, res, path+"->"+to_string(root->left->val));  //两个字符串使用“+”连接，是字符串的无空格连接
        if(root->right!=NULL)
            printPath(root->right, res, path+"->"+to_string(root->right->val));
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        // Write your code here
        vector<string> result;
        if(root==NULL)
            return result;
        printPath(root,result,to_string(root->val));  //to_string(int value)是把一个整数转换为字符串
        return result;
    }
};