class Solution {
    /** 
     * param A : an integer sorted array
     * param target :  an integer to be inserted
     * return : an integer
     */
public:
    int searchInsert(vector<int> &A, int target) {
        // write your code here
        if(A.size()==0)
            return 0;
        int low=0,high=A.size()-1;
        int mid;
        while(low<=high)
        {
            mid=(high-low)/2+low;
            if(A[mid]==target)
                return mid;
            else if(A[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};