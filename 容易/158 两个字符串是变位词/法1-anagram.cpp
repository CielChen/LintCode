class Solution {
public:
    /**
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */
    bool anagram(string s, string t) {
        // write your code here
        //法1：O(nlogn)的解法
        if(s=="" || t=="") 
            return false;
        if(s.length() != t.length()) 
            return false;
 
        sort(&s[0], &s[0]+s.length());
        sort(&t[0], &t[0]+t.length());
        if(s == t) 
            return true;
        else 
            return false;
           
    }
};