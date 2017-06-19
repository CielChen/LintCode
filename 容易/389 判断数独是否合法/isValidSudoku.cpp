class Solution {
public:
    /**
      * @param board: the board
      * @return: wether the Sudoku is valid
      */
    bool checkValid(int vec[], int val)
    {
        if(val < 0)  //对应的是字符‘.’
            return true;
        if(vec[val] == 1)  //说明对应的数字已被填充
            return false;
        vec[val] = 1;
        return true;
    }
    
    bool isValidSudoku(const vector<vector<char>>& board) {
        //write your code here
        int rowValid[10] = {0};//用于判断某一行是否合法
        int columnValid[10] = {0};//用于判断某一列是否合法
        int subBoardValid[10] = {0};//用于判断某一个九宫格是否合法
        for(int i = 0; i < 9; i++)
        {
            memset(rowValid, 0, sizeof(rowValid));
            memset(columnValid, 0, sizeof(columnValid));
            memset(subBoardValid, 0, sizeof(subBoardValid));
            for(int j = 0; j < 9; j++)
            {
                if(!checkValid(rowValid, board[i][j]-'0') ||
                   !checkValid(columnValid, board[j][i]-'0') ||
                   !checkValid(subBoardValid, board[3*(i/3) + j/3][3*(i%3) + j%3]-'0'))
                   return false;
            }
        }
        return true;
    }
};