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
    /**
     * @param root: The root of binary tree.
     * @return: Postorder in vector which contains node values.
     */
public:
    vector<int> postorderTraversal(TreeNode *root) {
        // write your code here
        //法2：非递归实现
        vector<int> result;
        stack<TreeNode*> node;
        
        TreeNode *cur,*lastVisit;  //cur：当前访问的节点；lastVisit：上一次访问的节点
        cur=root;
        lastVisit=NULL;
        while(cur!=NULL)  //先把cur移动到左子树最下边 
        {
            node.push(cur);
            cur=cur->left;
        }
        
        while(!node.empty())
        {
            //走到这里，Cur都是空，并已经遍历到左子树底端(看成扩充二叉树，则空，亦是某棵树的左孩子)
            cur = node.top();  
            node.pop(); 

            //一个根节点被访问的前提是：无右子树或右子树已被访问过  
            if (cur->right == NULL || cur->right == lastVisit)  
            {  
                result.push_back(cur->val);
                //修改最近被访问的节点  
                lastVisit = cur;  
            }  
            else  
            {  
                //根节点再次入栈  
                node.push(cur);  
                //进入右子树，且可肯定右子树一定不为空  
                cur = cur->right;  
                while(cur!=NULL)  
                {  
                    node.push(cur);  
                    cur = cur->left;  
                }  
            }  
        }
        return result;
    }
};