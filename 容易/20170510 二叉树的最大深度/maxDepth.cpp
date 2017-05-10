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
    int maxDepth(TreeNode *root) {
        // write your code here
        TreeNode *p,*lchild,*rchild;
        p=root;
        int depth=0,ldepth,rdepth;
        
        if(p==NULL)
            return 0;
        else
        {
            depth++;
            lchild=p->left;
            rchild=p->right;
            
            ldepth=maxDepth(lchild);
            rdepth=maxDepth(rchild);
        }
        if(ldepth<=rdepth)
            depth=depth+rdepth;
        else
            depth=depth+ldepth;
            
        return depth;
    }
};