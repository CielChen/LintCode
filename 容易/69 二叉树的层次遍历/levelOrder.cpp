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
     * @return: Level order a list of lists of integer
     */
public:
    vector<vector<int>> levelOrder(TreeNode *root) {
        // write your code here
        vector<vector<int> > order;
        queue<TreeNode*> queue;
        int len;

        if(root == NULL) {
            return order;
        }

        queue.push(root);
        len = queue.size();

        while(!queue.empty()) {  
            vector<int> base;  
            len = queue.size();  
  
            while(len--) {
                TreeNode *tmp=queue.front();  
                base.push_back(tmp->val);
                queue.pop();  
                if(tmp->left)  
                    queue.push(tmp->left);  
                if(tmp->right)      
                    queue.push(tmp->right);  
            }  
            order.push_back(base);  
        }  
        return order;
    }
};
