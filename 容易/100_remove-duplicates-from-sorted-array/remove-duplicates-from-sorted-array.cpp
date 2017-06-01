/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/remove-duplicates-from-sorted-array
@Language: C++
@Datetime: 17-05-27 07:39
*/

class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        for(vector<int>::iterator ite=nums.begin();ite!=nums.end();)
        {
            //之前没加这个if判断，会出错
            if(ite==nums.end()-1)
                break;
                
            if(*ite==*(ite+1))
                nums.erase(ite);
            else
                ite++;
        }
        return nums.size();
    }
};