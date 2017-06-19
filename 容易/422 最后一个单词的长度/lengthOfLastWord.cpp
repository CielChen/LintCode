class Solution {
public:
    /**
     * @param s A string
     * @return the length of last word
     */
    int lengthOfLastWord(string& s) {
        // Write your code here
        if(s.size()==0)
            return 0;
        int head,tail;  //记录单词的首尾位置
        bool word=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                if(word==false)
                {
                    head=i;
                    word=true;
                }
            }
            else
            {
                if(word==true)
                {
                    word=false;
                    tail=i-1;
                }
            }
        }
        if(word==true)  //只有一个单词
            return s.size()-head;
        else
            return tail-head+1;
    }
};