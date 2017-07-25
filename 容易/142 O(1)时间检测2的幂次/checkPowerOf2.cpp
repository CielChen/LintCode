class Solution {
public:
    /*
     * @param n: An integer
     * @return: True or false
     */
    bool checkPowerOf2(int n) {
        // write your code here
        //2的幂次:10000000这种形式
        //注意考虑n为负数和0的情况
        if(n<=0)
            return false;
        return (n & (n-1)) == 0 ? true : false;  
        /*if(n & (n-1) == 0)
            return true;
        else
            return false;
            //注：？比if else时间上更加优化
*/
    }
};