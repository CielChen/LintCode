class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        //������˼·�ǣ�����forѭ���������������������ͣ��ж��Ƿ���ڸ�����target��
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

