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
            if(s[i]!=' ')  //�����ʴ���word
            {
                if(word.size()==0 && i!=0)  //i!=0�������Կո�Ϊ��ͷ���ַ���s
                    result.push_back(" ");//�����ڵĵ��ʼ��һ���ո�
                word.push_back(s[i]);
                i++;
            }
            else  //�����ո�
            {
                if(word.size()==0)  //��û�������κε��ʣ�˵���Կո�Ϊ��ͷ
                {
                    i++;
                }
                else //�����ʴ���result
                {
                    string temp;
                    for(int j=0;j<word.size();j++)
                        temp+=word[j];
                    result.push_back(temp);
                    word.clear();  //���word
                }
            }
        }
        if(word.size()!=0)  //�������һ������
        {
            string temp;
            for(int j=0;j<word.size();j++)
                temp+=word[j];
            result.push_back(temp);
        }
        
        //��result�еĵ��ʺͿո������inverse
        for(int i=result.size()-1;i>=0;i--)
            inverse+=result[i];
        return inverse;
        
    }
};
