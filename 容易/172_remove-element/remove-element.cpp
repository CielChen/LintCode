/*
@Copyright:LintCode
@Author:   CielChen
@Problem:  http://www.lintcode.com/problem/remove-element
@Language: C++
@Datetime: 17-05-27 07:31
*/

class Solution {
public:
    /** 
     *@param A: A list of integers
     *@param elem: An integer
     *@return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        // write your code here
        for(vector<int>::iterator ite=A.begin();ite!=A.end();)
        {
            if(*ite==elem)
                A.erase(ite);
            else
                ++ite;
        }
        return A.size();
    }
};