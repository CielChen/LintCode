/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/valid-palindrome
@Language: C++
@Datetime: 17-06-05 13:05
*/

class Solution {
public:
    /**
     * @param s A string
     * @return Whether the string is a valid palindrome
     */
    bool check(char ch){  
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))  
            return false;  
        return true;      
    }   
      
    bool isPalindrome(string& s) {  
          
        if(s.empty())  
            return true;  
        if(s.size()==1)  
            return true;  
        int size=s.size();      
        int end=size-1;  
        int begin=0;  
          
        while(begin<end){  
            while(end>=0&&check(s[end])){  
                --end;  
            }  
            while(begin<size&&check(s[begin])){  
                ++begin;  
            }  
    
            if(tolower(s[end])!=tolower(s[begin]))   
                return false;  
            else  
                --end,++begin;  
               
        }  
        return true;  
    }  
};