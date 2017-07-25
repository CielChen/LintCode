class Solution {
public:
    /**
     * @param str: a string
     * @return: a boolean
     */
    bool isUnique(string &str) {
        // write your code here
        //法1：双重循环
        for(int i=0;i<str.length()-1;i++)
        {
            for(int j=i+1;j<str.length();j++)
            {
                if(str[j]==str[i])
                    return false;
            }
        }
        return true;
        
    }
};