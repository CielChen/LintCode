class Solution {
public:
    /**
     * @param obstacleGrid: A list of lists of integers
     * @return: An integer
     */ 
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        // write your code here
        int row,col;
        row=obstacleGrid.size();
        if(row==0)
            return 0;
        col=obstacleGrid[0].size();
        
        int path[100][100];
        if(obstacleGrid[0][0]==1)  //起点就是障碍
            return 0;
        else
            path[0][0]=1;
        //第一行和第一列初始化为1
        for(int i=1;i<col;i++)  //第一行
        {
            if(obstacleGrid[0][i]==1)  //障碍
                path[0][i]=0;
            else{
                if(path[0][i-1]==0)  //前一个是障碍，则走不到这里
                    path[0][i]=0;
                else
                    path[0][i]=1;
            } 
        }
        for(int i=1;i<row;i++)  //第一列
        {
            if(obstacleGrid[i][0]==1)  //障碍
                path[i][0]=0;
            else{
                if(path[i-1][0]==0)  //前一个是障碍，则走不到这里
                    path[i][0]=0;
                else
                    path[i][0]=1;
            } 
        }
        //除了第一行和第一列的元素
        for(int i=1;i<row;i++)
        {
            for(int j=1;j<col;j++)
            {
                if(obstacleGrid[i][j]==0)
                    path[i][j]=path[i-1][j]+path[i][j-1];
                else
                    path[i][j]=0;
            }
        }
        return path[row-1][col-1];
    }
};