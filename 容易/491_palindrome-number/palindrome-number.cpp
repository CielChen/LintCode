/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/palindrome-number
@Language: C++
@Datetime: 17-05-19 10:51
*/

class Solution {
public:
    /**
     * @param num a positive number
     * @return true if it's a palindrome or false
     */
    bool palindromeNumber(int num) {
        // Write your code here
        //分别从首、尾开始遍历，看是否相等
        
        //将num存入vector
        vector<int> origin;
        while(num!=0)
        {
            origin.push_back(num%10);
            num=num/10;
        }
        
        int i=0,j=origin.size()-1;
        while(i<j)
        {
            if(origin[i]==origin[j])
            {
                i++;
                j--;
            }
            else
                return false;
        }
        return true;
    }
};