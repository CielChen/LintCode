/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/merge-sorted-array
@Language: C++
@Datetime: 17-05-30 08:21
*/

class Solution {
public:
    /**
     * @param A: sorted integer array A which has m elements, 
     *           but size of A is m+n
     * @param B: sorted integer array B which has n elements
     * @return: void
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        int pos = m + n - 1;  
        int posA = m - 1;  
        int posB = n - 1;  
        while (posA >= 0 && posB >= 0) {  
            if (A[posA] > B[posB]) {  
                A[pos--] = A[posA--];  
            } else {  
                A[pos--] = B[posB--];  
            }  
        }  
        while (posA >= 0) {  
            A[pos--] = A[posA--];  
        }  
        while (posB >= 0) {  
            A[pos--] = B[posB--];  
        }  
    }
};