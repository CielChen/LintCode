class Solution {
public:
    /**
     * @param triangle: a list of lists of integers.
     * @return: An integer, minimum path sum.
     */
    int minimumTotal(vector<vector<int> > &triangle) {
        // write your code here
        //法2：一维空间
        const int len = triangle.size();
        vector<int> buff(len);
        buff[0]= triangle[0][0];
        for (int i = 1; i < len; i++)
        {
            for (int j = i; j >= 0; j--)
            {
                // 要取buff[j]但是要保证不越界。
                // 第i-1行的j的取值范围为[0, i-1]
                int lo = max(0, j-1);
                int hi = min(j, i-1);
                buff[j] = min(buff[lo], buff[hi]) + triangle[i][j];
            }
        }
        int res = buff[0];
        for (int i = 1; i < len; i++)
            res = min(res, buff[i]);
        return res;
    }
};
