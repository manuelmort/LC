class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int original_color = image[sr][sc];
        if(image[sr][sc] == color) return image;

        dfs(sr,sc,image, original_color, color);
        return image;
    }
private:
    void dfs(int r, int c, vector<vector<int>> &image, int original_color, int color) {
        // We want to first do boundary checking (Automatic and a must)
        // At every recursive iteration we need to check boundary
        int rows = image.size();
        int cols = image[0].size();

        if(r < 0 || c < 0 || r >= rows || c >= cols) return;

        if(image[r][c] != original_color) return;
        image[r][c] = color;

        //recursive travel to each  side veritically/horizontally
        dfs(r-1, c, image,  original_color, color);
        dfs(r+1, c, image, original_color, color);
        dfs(r, c-1, image, original_color, color);
        dfs(r, c+1, image, original_color, color); 

    }
};
