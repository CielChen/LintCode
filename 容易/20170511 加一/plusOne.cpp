class Solution {
public:
    /**
     * @param digits a number represented as an array of digits
     * @return the result
     */
    vector<int> plusOne(vector<int>& digits) {
        // Write your code here
        vector<int> result;
        int jinwei=0;
        //先算digits最后一位+1
        int last=digits[digits.size()-1];
        last++;
        if(last<10)
            result.push_back(last);
        else
        {
            result.push_back(0);
            jinwei=1;
        }
        
        //i从倒数第二位向前遍历
        for(int i=digits.size()-2;i>=0;i--)
        {
            int temp=digits[i];
            temp+=jinwei;
            if(temp<10)
            {
                result.insert(result.begin(),temp);  //从result头插入
                jinwei=0;
            }
            else
            {
                result.insert(result.begin(),0);
            }
        }
        
        if(jinwei==1)
            result.insert(result.begin(),1);
        return result;
    }
};