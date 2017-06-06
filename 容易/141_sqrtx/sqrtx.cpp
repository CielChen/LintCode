/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/sqrtx
@Language: C++
@Datetime: 17-06-05 14:20
*/

class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        // write your code here
        //二分法求解
        int low = 0, high = x;
        while(low <= high) {
            int mid = low + (high - low)/2;
            long square = (long)mid * (long)mid;
            long square1 = (long)(mid + 1) * (long)(mid + 1);
            long square2 = (long)(mid - 1) * (long)(mid - 1);

            if(square == x) return mid;
            if(square < x && square1 > x) return mid;
            if(square > x && square2 < x) return mid - 1;
            if(square < x) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};