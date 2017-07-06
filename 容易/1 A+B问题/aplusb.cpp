class Solution {
public:
    /*
     * @param a: The first integer
     * @param b: The second integer
     * @return: The sum of a and b
     */
    int aplusb(int a, int b) {
        // write your code here, try to do it without arithmetic operators.
        if(a==0)
            return b;  
        if(b==0)
            return a;  
        int x1 = a^b;  //异或
        int x2 = (a&b)<<1;  //左移1位
        return aplusb(x1,x2);   
    }
};