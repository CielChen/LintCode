/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/add-binary
@Language: C++
@Datetime: 17-05-31 09:18
*/

class Solution {
public:
    /**
     * @param a a number
     * @param b a number
     * @return the result
     */
    string addBinary(string& a, string& b) {
        // Write your code here
        string result = "";   
        int c = 0, num = 0;   //c：进位
        int i = a.size() - 1, j = b.size() - 1;       
        for (; i >= 0 && j >= 0; i--, j--){         
            num = (a[i] - '0') + (b[j] - '0') + c;        
            c = num / 2;              
            num = num % 2;            
            result += ('0' + num);    
        }         
        for (; i >= 0; i--){           
            num = (a[i] - '0') + c;           
            c = num / 2;              
            num = num % 2;        
            result += ('0' + num);        
              
        }         
        for (; j >= 0; j--)    
        {             
            num = (b[j] - '0') + c;       
            c = num / 2;          
            num = num % 2;        
            result += ('0' + num);        
              
        }         
        if (c != 0) {    //别忘了进位       
            result += ('0' + c);      
        }     
        
        //resutl倒置
        i = 0; j = result.size() - 1;     
        while (i < j){             
            char temp = result[i];        
            result[i] = result[j];        
            result[j] = temp;         
            i++; 
            j--;     
            }         
        return result;    
          
    }
};