class Solution {
public:
    /**
     * @param A: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        // write your code here
        //法2：以上的优化
        const int n = nums.size();
        long long tmp = 1;
        vector<long long> prod(n, 1);
        // prod为nums[i]左边元素的乘积，但不包括nums[i]
        for (int i = 0; i < n; ++i) {
            prod[i] = tmp;
            tmp *= nums[i]; 
        }
        tmp = 1;
        // 此时prod为除了nums[i]之外其他元素的乘积
        for (int i = n -1; i >= 0; --i) {
            prod[i]  *=  tmp;
            tmp *= nums[i];
        }
        return prod;
    }
};