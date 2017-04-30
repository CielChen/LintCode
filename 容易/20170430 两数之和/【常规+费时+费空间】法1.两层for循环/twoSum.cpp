class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        //常见的思路是：两层for循环，任意两个数组合求其和，判断是否等于给定的target。
        vector<int> result;
        for(int i=0;i,nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    result.push_back(i+1);
                    result.push_back(j+1);
                    return result;
                }
            }
        }
    }
};

