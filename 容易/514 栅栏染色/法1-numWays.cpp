class Solution {
public:
    /**
     * @param n non-negative integer, n posts
     * @param k non-negative integer, k colors
     * @return an integer, the total number of ways
     */
    int numWays(int n, int k) {
        // Write your code here
        //法1：存入数组
        if(n==0 || k==0)
            return 0;
            
        int *way=new int(n);
        way[0]=k;
        way[1]=k*k;
        for(int i=2;i<n;i++)
        {
            way[i]=way[i-1]*(k-1)+way[i-2]*(k-1);
            if(way[i]==0)  //一旦中途有柱子不能涂色，就返回0
                return 0;
        }
        return way[n-1];
    }
};