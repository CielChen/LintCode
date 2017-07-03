class Solution {
public:
    /**
     * @param matrix, a list of lists of integers
     * @param target, an integer
     * @return a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        // write your code here
        int row,col;
        row=matrix.size();
        if(row==0)
            return false;
        col=matrix[0].size();
        
        for(int i=0,j=col-1;i<row && j>=0;)
        {
            if(matrix[i][j]==target)
                return true;
            if(matrix[i][j]<target)
                i++;
            else
                j--;
        }
        return false;
    }
};
