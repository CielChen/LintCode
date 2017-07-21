class Solution {
public:
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true 
     *           else return false
     */
    bool compareStrings(string A, string B) {
        // write your code here
        //法1：统计A和B的每种字符数目
        int Achar[26];//储存字符串的每个字母个数
        int Bchar[26];
        for (int i = 0; i<26; i++) {
            Achar[i] = 0;
            Bchar[i] = 0;
        }
 
        int Adate,Bdate;//记录AB的字符统计数据
        int countA = A.length();
        int countB = B.length();
        for (int i = 0; i<countA; i++) {
            int index;
            index = A[i] - 65;  //65为大写A的ASCⅡ码值
            Achar[index]++;
        }
        for (int i = 0; i<countB; i++) {
            int index;
            index = B[i] - 65;
            Bchar[index]++;
        }
        
        for (int i = 0; i<26; i++) {
            if (Achar[i]<Bchar[i])
                return false;
        }
        return true;
    }
};
