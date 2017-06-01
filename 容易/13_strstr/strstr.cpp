/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/strstr
@Language: C++
@Datetime: 17-05-30 09:00
*/

class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        int i=0,j=0;
        if(source==NULL || target==NULL)  //只要两者之一指向空地址，返回-1
            return -1;
        if(target[j]=='\0')  //只要target为空字符串，返回0
            return 0;
        
        
        bool find=false;
        int pos;
        while(source[i]!='\0' && target[j]!='\0')
        {
            if(source[i]==target[j])
            {
                if(find==false)
                {
                    find=true;
                    pos=i;
                }
                j++;
                i++;
            }else
            {
                if(find==true)
                {
                    find=false;
                    j=0;
                }
                else
                    i++;
            }
        }
        if(find==true)
            return pos;
        else
            return -1;
    }
};
