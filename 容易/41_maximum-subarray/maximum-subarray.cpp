/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/maximum-subarray
@Language: C++
@Datetime: 17-05-23 11:13
*/

class Solution {
public:    
    /**
     * @param nums: A list of integers
     * @return: A integer indicate the sum of max subarray
     */
    int maxSubArray(vector<int> nums) {
        // write your code here
        if(nums.size()==1)
            return nums[0];
        
        int maxSum=nums[0];  //最大子数组之和
        vector<int> curSum;  //对于第i个元素为止的最大子数组的和
        curSum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            int temp=curSum[i-1]+nums[i];
            if(temp>nums[i])
                curSum.push_back(temp);
            else
                curSum.push_back(nums[i]);
            if(curSum[i]>maxSum)
                maxSum=curSum[i];
        }
        
        return maxSum;
    }
};
