class Solution {
public:
    /**
     * @param grid: a list of lists of integers.
     * @return: An integer, minimizes the sum of all numbers along its path
     */
    int minPathSum(vector<vector<int> > &grid) {
        // write your code here
        int row=grid.size();
        if(row==0)
            return 0;
        int col=grid[0].size();
       
        //开辟指定行和列的二维空间 
        vector<vector<int> > path(row, vector<int>(col)); 
        //int[][] path=new int[row][col];
        
        path[0][0]=grid[0][0];
        //第一行
        for(int j=1;j<col;j++)
            path[0][j]=path[0][j-1]+grid[0][j];
        //第一列
        for(int i=1;i<row;i++)
            path[i][0]=path[i-1][0]+grid[i][0];
        //其他
        for(int i=1;i<row;i++)
        {
            for(int j=1;j<col;j++)
                path[i][j]=min(path[i-1][j],path[i][j-1])+grid[i][j];
        }
        return path[row-1][col-1];
    }
};
