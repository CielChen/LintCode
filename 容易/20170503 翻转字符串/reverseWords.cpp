class Solution {
public:
    /**
     * @param s : A string
     * @return : A string
     */
    string reverseWords(string s) {
        // write your code here
        vector<char> word;
        vector<string> result;  
        string inverse;
        if(s=="")
            return s;
        for(int i=0;i<s.size();)
        {
            if(s[i]!=' ')  //将单词存入word
            {
                if(word.size()==0 && i!=0)  //i!=0限制了以空格为开头的字符串s
                    result.push_back(" ");//在相邻的单词间加一个空格
                word.push_back(s[i]);
                i++;
            }
            else  //遇见空格
            {
                if(word.size()==0)  //还没有遇见任何单词，说明以空格为开头
                {
                    i++;
                }
                else //将单词存入result
                {
                    string temp;
                    for(int j=0;j<word.size();j++)
                        temp+=word[j];
                    result.push_back(temp);
                    word.clear();  //清空word
                }
            }
        }
        if(word.size()!=0)  //加入最后一个单词
        {
            string temp;
            for(int j=0;j<word.size();j++)
                temp+=word[j];
            result.push_back(temp);
        }
        
        //将result中的单词和空格倒叙存入inverse
        for(int i=result.size()-1;i>=0;i--)
            inverse+=result[i];
        return inverse;
        
    }
};
