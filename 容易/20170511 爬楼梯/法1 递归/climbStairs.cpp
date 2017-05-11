class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        //法1：递归
        if(n==1)  //一层楼梯，只有一种方法
            return 1;
        else if(n==2)  //2层楼梯，有2种方法：1+1,2
            return 2;
        else  //3层和以上，递归
        {
            int method;
            method=climbStairs(n-1)+climbStairs(n-2);
            return method;
        }
    }
};
