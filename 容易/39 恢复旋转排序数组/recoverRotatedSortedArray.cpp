class Solution {
public:
    void recoverRotatedSortedArray(vector<int> &nums) {
        // write your code here
        int len=nums.size();
        if(len==0)
            return ;
        int head=0;
        while(nums[0]<=nums[head] && head<len)  //找到第一个小于头的数，head就是原始数组的头
        {
            head++;
        }
        if(head==len)  //说明数组已按照由小到大排序了，无需更改
            return ;

        for(int i=0;i<head;i++)  //将nums[0]~nums[head-1]依次插入到vector最后，并删除当前的头
        {
            nums.push_back(nums[0]);
            nums.erase(nums.begin());
        }
    }
};