class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        //法2：动归
        if(n==0 || n==1)  //0层或一层楼梯，只有一种方法
            return 1;
        
        int way1=1,way2=1;
        int ways=0;
        int i=2;
        while(i<=n)  //2层及以上
        {
            ways=way1+way2;
            
            way1=way2;
            way2=ways;
            
            i++;
        }
        return ways;
    }
};
