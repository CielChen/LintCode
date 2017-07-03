class Solution {
public:
    /**
     * @param n, m: positive integer (1 <= n ,m <= 100)
     * @return an integer
     */
    int uniquePaths(int m, int n) {
        // wirte your code here
        //法2：动态规划
        
        if(m == 1 || n == 1) 
            return 1;
        
        //int path[]=new int[n];  //给数组path分配n个int空间,lintcode用这种方法会编译错误
        int path[100];
        //第0行和第1列
        for(int i = 0; i < n; i++) {
            path[i] = 1;
        }
        //第1行~第m-1行
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                path[j] += path[j-1];
            }
        }
        return path[n-1];
    }
};
