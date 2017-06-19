class Solution {
public:
    /**
     * @param triangle: a list of lists of integers.
     * @return: An integer, minimum path sum.
     */
    int minimumTotal(vector<vector<int> > &triangle) {
        // write your code here
        //法1：二维空间
        const int len = triangle.size();
        vector<vector<int>> buff(len, vector<int>(len));
        buff[0][0] = triangle[0][0];
        for (int i = 1; i < len; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                // 要取buff[i-1][j-1]，和buff[i-1][j]，但是要保证不越界。
                // 第i-1行的j的取值范围为[0, i-1]
                int lo = max(0, j-1);
                int hi = min(j, i-1);
                buff[i][j] = min(buff[i-1][lo], buff[i-1][hi]) + triangle[i][j];
            }
        }
        int res = buff[len-1][0];
        for (int i = 1; i < len; i++)
            res = min(res, buff[len-1][i]);
        return res;
    }
};
