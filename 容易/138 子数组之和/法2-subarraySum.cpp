class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number 
     *          and the index of the last number
     */
    vector<int> subarraySum(vector<int> nums){
        // write your code here
        //第二种思路：利用map
        vector<int> ret;  
        int n;  
        if((n=nums.size())==0)  
            return ret;  
        map<int,int> mark;    
        mark[0]=-1;   //以防和为零的序列正好从第一个元素开始  
        int sum=0;  
        for(int i=0;i<n;++i){  
            sum+=nums[i];  
            if(mark.count(sum)){  
                ret.push_back(mark[sum]+1);  
                ret.push_back(i);  
                return ret;  
            }  
            mark[sum]=i;  
        }  
        return ret;  
    }
};