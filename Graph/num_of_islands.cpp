class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(grid[i][j] == '1'){
                    dfs(i, j, grid);
                    count++;
                }
            }

        }
        
     return count;   
    }
    
    void dfs(int r, int c, vector<vector <char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        // Check if we hit a boundary 
        if(c < 0 || c >= cols || r < 0 || r >= rows)return;
        if(grid[r][c] != '1')return;
        
        grid[r][c] = '0'; 

        dfs(r,c-1,grid); 
        dfs(r,c+1,grid);
        dfs(r+1,c,grid);
        dfs(r-1,c,grid);
    }

};
