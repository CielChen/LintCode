class Solution {
 public:
    // param n : description of n
    // return: description of return 
    long long trailingZeros(long long n) {
        if(n==0 || n==1)
            return 0;
        
        long long zero=0;
        for(long long i=1;(long long)pow(5,i)<=n;i++)
        {
            zero=zero+n/(long long)pow(5,i);  //注意：强制类型转换
        }
        
        return zero;
    }
};
