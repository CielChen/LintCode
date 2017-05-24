/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/count-and-say
@Language: C++
@Datetime: 17-05-23 11:56
*/

class Solution {
public:
    /**
     * @param n the nth
     * @return the nth sequence
     */
    string countAndSay(int n) {
        // Write your code here
        string res="1";  
   
        while(--n)  
        {  
            int count=1;  
            string temp="";  
            for(int i=1;i<res.size();i++)  
            {  
                if(res[i]==res[i-1])  
                {  
                    count++;  
                }  
                else  
                {  
                    temp+=to_string(count)+res[i-1];  
                    count=1;  
                }  
            }  
            temp+=to_string(count)+res.back();  
            res=temp;  
        }  
  
        return res;  
    }
};