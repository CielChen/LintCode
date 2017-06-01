/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/happy-number
@Language: C++
@Datetime: 17-06-01 14:06
*/

class Solution {
public:
    /**
     * @param n an integer
     * @return true if this is a happy number or false
     */
    bool isHappy(int n) {
        // Write your code here
        vector<int> num;
        while(1)
        {
            while(n!=0)
            {
                num.push_back(n%10);
                n/=10;
            }
            int sum=0;
            for(int i=0;i<num.size();i++)
                sum+=num[i]*num[i];
            if(sum==1)
                return true;
            else if(sum==4)
            {
                return false;
            }else
            {
                n=sum;
                num.clear();
            }
        }
    }
};