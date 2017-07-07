class Solution {
public:
    /**
     * @param A: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        // write your code here
        vector<long long> result(nums.size(),1);
        vector<long long> left(nums.size(),1);  //nums[i]左边元素的乘积，不包括nums[i]
        vector<long long> right(nums.size(),1);  //nums[i]右边元素的乘积，不包括nums[i]
        //以上3个vector大小均为nums.size()，且全部元素都初始化为1
        
        for(int i=1;i<nums.size();i++)
            left[i]=left[i-1]*nums[i-1];
        for(int i=nums.size()-2;i>=0;i--)
            right[i]=right[i+1]*nums[i+1];
        
        for(int i=0;i<nums.size();i++)
            result[i]=left[i]*right[i];
        return result;
    }
};