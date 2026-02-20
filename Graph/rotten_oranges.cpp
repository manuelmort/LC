class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        // grab grid size
        int rows = grid.size();
        int cols = grid[0].size();
        int minute = 0;
        // Scan check of the entire array for number of fresh oranges and rotten
        // oranges
        int fresh = 0;
        queue<pair<int, int>> q;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    fresh++;
                }
                if (grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }
        // Grab horizontal and vertical directions
        vector<pair<int,int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        // General format to start bfs
        while (!q.empty()) {
            int levelSize = q.size();
            bool rottenThisMinute = false;
            for (int i = 0; i < levelSize; i++) {
                // for each node within this level, lets do something here
                auto [r,c] = q.front();
                q.pop();

                for(auto& d:dirs) {
                    int nr = r + d.first;
                    int nc = c + d.second;

                    if(!(nr < 0 || nc < 0 || nr >= rows || nc >= cols) && grid[nr][nc] == 1) {
                        grid[nr][nc] = 2;
                        q.push({nr,nc});
                        fresh--;
                        rottenThisMinute = true;
                    }
                }
            }
            if(rottenThisMinute) {minute++;}
        }
        return fresh == 0 ? minute : -1;
    }
};
