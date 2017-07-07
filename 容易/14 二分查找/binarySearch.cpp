class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
    int binarySearch(vector<int> &array, int target) {
        // write your code here
        if(array.size()==0)
            return -1;
        int low,high,mid;
        low=0;
        high=array.size()-1;
        while(low<high)
        {
            mid=(high+low)/2;
            if(array[mid]<target)
            {
                low=mid+1;
            }else if(array[mid]>target)
            {
                high=mid-1;
            }else  //array[mid]==target
            {
                high=mid;
            }
        }
        if(low==high)
        {
            if(array[low]==target)
                return low;
            else
                return -1;
        }
    }
};