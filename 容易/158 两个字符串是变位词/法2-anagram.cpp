class Solution {
public:
    /**
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */
    bool anagram(string s, string t) {
        // write your code here

        //法2：O(n),看s中的各个字符个数是否等于t【我最开始的想法】
        if(s.length() != t.length()) 
            return false;
        
        int len=s.length();
        int count[256];
        memset(count, 0, sizeof(count));  //ascii码共256个，先将数组初始为0
        
        for(int i=0;i<len;i++)
        {
            ++count[(int)s[i]];  //加上s各字符的个数
            --count[(int)t[i]];  //减去t各字符个数
        }
        //最后统计各字符个数，如果有不等于0的，说明s和t不是变位词
        for(int i=0;i<256;i++)
        {
            if(count[i]!=0)
                return false;
        }
        return true;
    }
};