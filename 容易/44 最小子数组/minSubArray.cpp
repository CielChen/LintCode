class Solution {
public:
    /**
     * @param nums: a list of integers
     * @return: A integer denote the sum of minimum subarray
     */
    int minSubArray(vector<int> nums) {
        // write your code here
        if(nums.size()==0)
            return 0;
            
        int *localMin=new int[nums.size()];  //以第i个数作结的最小子数组之和
        int *globalMin=new int[nums.size()];  //到第i个数为止（可不以第i个数作结）的最小子数组之和
        localMin[0]=nums[0];
        globalMin[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            localMin[i]=min(localMin[i-1]+nums[i],nums[i]);
            globalMin[i]=min(globalMin[i-1],localMin[i]);
        }
        return globalMin[nums.size()-1];
    }
};
