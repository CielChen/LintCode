class Solution {
public:
    /**
     * @param n, m: positive integer (1 <= n ,m <= 100)
     * @return an integer
     */
    int uniquePaths(int m, int n) {
        // wirte your code here
        //法1：数学公式法
        if(m == 1 || n == 1) 
            return 1;
     
        long factorial = 1;
        for(int i = 1; i <= n-1; i++) {
            factorial = factorial*(m-1 + i)/i;
        }
        return (int)factorial;
    }
};
