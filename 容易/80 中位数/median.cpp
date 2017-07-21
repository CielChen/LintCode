class Solution {
public:
    /**
     * @param nums: A list of integers.
     * @return: An integer denotes the middle number of the array.
     */
    void swap(vector<int> &array, int a, int b)
    {
        int temp=array[a];
        array[a]=array[b];
        array[b]=temp;
    }
     
    int quickSort(vector<int> &array, int low, int high)
    {
        //快速排序
        int l=low;
        int h=high;
        int povit=array[low];
        
        while(l<h)
        {
            while(l<h && array[h]>=povit)
                h--;
            if(l<h)
            {
                swap(array, l, h);
                l++;
            }
            
            while(l<h && array[l]<=povit)
                l++;
            if(l<h)
            {
                swap(array, l, h);
                h--;
            }
        }
        return h;
    }
    
    int median(vector<int> &nums) {
        // write your code here
        int left=0;
        int right=nums.size()-1;
        int key=right/2;
        int k=0;
        
        while(key!=k)
        {
            k=quickSort(nums,left,right);
            if(k>key)
                right=k-1;
            else if(k<key)
                left=k+1;
        }
        return nums[key];
    }
};
