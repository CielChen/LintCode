class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number 
     *          and the index of the last number
     */
    vector<int> subarraySum(vector<int> nums){
        // write your code here
        //第一种思路：利用两个for循环，每次取出一个元素依次与后面的元素相加，时间复杂度是O(n^2)
        vector<int> sub;
        if(nums.size()==0)
            return sub;
        
        int *sum=new int[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            sum[i]=0;
        }
        for(int i=0;i<nums.size();++i)
        {
            for(int j=i;j<nums.size();++j)
            {
                sum[i]+=nums[j];
                if(sum[i]==0)
                {
                    sub.push_back(i);
                    sub.push_back(j);
                    return sub;
                }
            }
        }
    }
};