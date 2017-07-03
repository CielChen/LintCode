
  Definition of TreeNode
  class TreeNode {
  public
      int val;
      TreeNode left, right;
      TreeNode(int val) {
          this-val = val;
          this-left = this-right = NULL;
      }
  }
 
class Solution {
    
      @param root The root of binary tree.
      @return Postorder in vector which contains node values.
     
public
    vectorint result;  注：用递归方法实现时，vectorint result一定要设置为全局变量
    vectorint postorderTraversal(TreeNode root) {
         write your code here
        法1：递归实现
        stackTreeNode node;
        if(root!=NULL)
        {
            postorderTraversal(root-left);
            postorderTraversal(root-right);
            result.push_back(root-val);
        }
        return result;
    }
};