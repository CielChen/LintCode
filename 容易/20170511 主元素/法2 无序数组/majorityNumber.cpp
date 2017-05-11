class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: The majority number
     */
    int majorityNumber(vector<int> nums) {
        // write your code here
        //法2：无序数组，去掉数组中不相等的两个元素，主元素仍是新数组的主元素
        int count=0;
        int majority;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                majority=nums[i];
                count++;
            }
            else
            {
                if(nums[i]!=majority)
                    count--;
                else
                    count++;
            }
        }
        return majority;
    }
};
