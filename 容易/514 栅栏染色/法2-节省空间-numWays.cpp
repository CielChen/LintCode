class Solution {
public:
    /**
     * @param n non-negative integer, n posts
     * @param k non-negative integer, k colors
     * @return an integer, the total number of ways
     */
    int numWays(int n, int k) {
        // Write your code here
        //节省空间的做法：第i个柱子的涂色方案仅与第i-1和i-2有关
        if(n==0 || k==0)
            return 0;
        if(n==1)
            return k;
        if(n==2)
            return k*k;
            
        int way[2];
        way[0]=k;
        way[1]=k*k;
        for(int i=2;i<n;i++)
        {
            int temp=way[1]*(k-1)+way[0]*(k-1);
            way[0]=way[1];
            way[1]=temp;
        }
        return way[1];
    }
};