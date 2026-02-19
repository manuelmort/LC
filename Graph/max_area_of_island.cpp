class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int num_islands = 0;
        int curr_area = 0;
        int max_area = 0;

        //Tricky part, remember that when passing a parameter through a function, it makes a new copy of it thefore you must return that copy of the parameter. You can avoid this by just referencing the variable that we are passing to keep tracking of the memory address we are manipulating
        for(int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] != 0) {
                    dfs(i,j, grid, curr_area);
                    max_area = max(max_area, curr_area);
                    curr_area = 0;
                }
            }
           
        }
        return max_area;
    }
private:
    void dfs(int r, int c, vector<vector<int>>& grid, int& curr_area) {

        // Boundary check 
        int rows = grid.size();
        int columns = grid[0].size();
        if(r < 0 || c < 0 || r >= rows || c >= columns) return;

        if(grid[r][c] != 1) return;
        grid[r][c] = 0; // Visited node
        curr_area +=1; 
        std::cout<<curr_area;

        dfs(r-1,c, grid,curr_area);
        dfs(r+1,c, grid,curr_area);
        dfs(r,c-1, grid,curr_area); 
        dfs(r,c+1, grid,curr_area);
    
    }
    
};

