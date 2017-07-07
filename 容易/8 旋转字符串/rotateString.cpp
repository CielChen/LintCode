class Solution {
public:
    /**
     * @param str: a string
     * @param offset: an integer
     * @return: nothing
     */
    void rotateString(string &str,int offset){
        //wirte your code here
        int len=str.length();
        string newString;
        for(int i=0;i<len;i++)
        {
            int pos=(i+offset)%len;
            newString[pos]=str[i];
        }
        for(int i=0;i<len;i++)
            str[i]=newString[i];
    }
};
