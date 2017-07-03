class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer 返回新数组的长度
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        if(nums.size()==0)
            return NULL;
        int count=1;  //计算数字出现的次数
        for(vector<int>::iterator i=nums.begin()+1;i!=nums.end();)
        {
            if(*i==*(i-1))
            {
                if(count==1)
                {
                    ++count;
                    ++i;
                }
                else  //该数字已经出现了两次
                {
                    nums.erase(i);
                }
            }
            else
            {
                count=1;
                ++i;
            }
        }
        return nums.size();
    }
};