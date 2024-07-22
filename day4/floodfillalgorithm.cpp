class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& image, vector<vector<int>>& ans, int &initColor, int &color, int drow[], int dcol[], int &n, int &m){
        ans[row][col] = color;
        // go to the neighbours
        for (int i=0; i<4; i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            // check if valid
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
            && image[nrow][ncol] == initColor && ans[nrow][ncol] != color){
                dfs(nrow, ncol, image, ans, initColor, color, drow, dcol, n, m);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> ans(image.begin(), image.end());
        int initColor = image[sr][sc];
        int drow[4] = {-1, 0, 1, 0};
        int dcol[4] = {0, 1, 0, -1};
        dfs(sr, sc, image, ans, initColor, color, drow, dcol, n, m);
        return ans;
    }
};