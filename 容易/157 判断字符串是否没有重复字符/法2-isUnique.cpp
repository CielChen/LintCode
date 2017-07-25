class Solution {
public:
    /**
     * @param str: a string
     * @return: a boolean
     */
    bool isUnique(string &str) {
        // write your code here
        //法2：ascii码表
        int ascii[256];
        memset(ascii, 0, 256);  //void *memset(void *s,int c,size_t n):将已开辟内存空间 s 的首 n 个字节的值设为值 c。
        for(int i=0;i<str.length();i++)
        {
            if(ascii[str[i]]==1)
                return false;
            ascii[str[i]]=1;
        }
        return true;

    }
};