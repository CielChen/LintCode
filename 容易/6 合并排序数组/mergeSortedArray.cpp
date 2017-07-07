class Solution {
public:
    /**
     * @param A and B: sorted integer array A and B.
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        vector<int> newArray;
        int i=0,j=0;
        while(i<A.size() && j<B.size())
        {
            if(A[i]<B[j])
            {
                newArray.push_back(A[i]);
                i++;
            }else if(A[i]==B[j])
            {
                newArray.push_back(A[i]);
                newArray.push_back(B[j]);
                i++;
                j++;
            }
            else
            {
                newArray.push_back(B[j]);
                j++;
            }
        }
        while(i<A.size())
        {
            newArray.push_back(A[i]);
            i++;
        }
        while(j<B.size())
        {
            newArray.push_back(B[j]);
            j++;
        }
        return newArray;
    }
};