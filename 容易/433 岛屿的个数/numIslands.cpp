class Solution {
public:
    /**
     * @param grid a boolean 2D matrix
     * @return an integer
     */
    void dfs(vector<vector<bool>> &grid, int x, int y) {
        if (x < 0 || x >= grid.size()) 
            return;
        if (y < 0 || y >= grid[0].size()) 
            return;
        if (grid[x][y]==false) 
            return;
        
        grid[x][y] = false;
        dfs(grid, x + 1, y);
        dfs(grid, x - 1, y);
        dfs(grid, x, y + 1);
        dfs(grid, x, y - 1);
    }
    int numIslands(vector<vector<bool>>& grid) {
        // Write your code here
        if (grid.empty() || grid[0].empty()) 
            return 0;
        int N = grid.size(), M = grid[0].size();
        int cnt = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (grid[i][j]==true) {
                    dfs(grid, i, j);
                    ++cnt;
                }
            }
        }
        return cnt;
    }

};