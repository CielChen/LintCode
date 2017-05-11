class Solution {
public:
    /**
     * @param s A string
     * @return whether the string is a valid parentheses
     */
    bool isValidParentheses(string& s) {
        // Write your code here
        stack<char> kuohao;
        int i=0;
        for (int i = 0; i < s.size(); i++)  
        {  
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')  
            {  
                kuohao.push(s[i]);  
            }  
            else if (s[i] == ')')  
            {  
                if (!kuohao.empty() && kuohao.top() == '(')  
                {  
                    kuohao.pop();  
                }  
                else  
                {  
                    return false;  
                }  
            }  
            else if (s[i] == '}')  
            {  
                if (!kuohao.empty() && kuohao.top() == '{')  
                {  
                    kuohao.pop();  
                }  
                else  
                {  
                    return false;  
                }  
            }  
            else  
            {  
                if (!kuohao.empty() && kuohao.top() == '[')  
                {  
                    kuohao.pop();  
                }  
                else  
                {  
                    return false;  
                }  
            }  
        }  
        //遍历完全部字符，栈为空
        if(kuohao.empty())
            return true;
        else  //如果栈不空，说明只有左边，没有右边
            return false;
    }
};