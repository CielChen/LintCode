class Solution {
public:
    /**
     * @param n the integer to be reversed
     * @return the reversed integer
     */
    int reverseInteger(int n) {
        // Write your code here
        int result=0;
       
        while(n!=0)
        {
            int temp=result;
            result=result*10;
            //判断是否超过32位
            if(temp!=result/10)
                return 0;
            
            result=result+n%10;
            n=n/10;
        }
        
        return result;
    }
};