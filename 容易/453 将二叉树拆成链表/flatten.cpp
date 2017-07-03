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
    void flatten(TreeNode *root) {
        // write your code here
        // 空结点
        if(root == NULL)
            return;
        // 左右结点都空
        if(root->left==NULL && root->right==NULL)
            return;
        // 左结点空
        if(root->left==NULL){
            TreeNode *right = root->right;
            flatten(right);
            return;
        }
        // 右节点空
        if(root->right==NULL){
            TreeNode *left = root->left;
            root->right = left;
            flatten(left);
            
            root->left = NULL;// 不要忘了将left结点设置为空
            return;
        }
        
        // 左右结点都不空
        TreeNode *left = root->left;
        TreeNode *right = root->right;
        root->right = left; 
        
        flatten(left);
        
        TreeNode *p = left;
        while(p->right!=NULL){ // 找到left部分的最右结点
            p = p->right;
        }
        p->right = right;  //p的右孩子=根的右孩子
        flatten(right);
        
        root->left = NULL; // left结点设置为空
        return;
    }
};