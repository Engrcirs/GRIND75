class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int original_color = image[sr][sc];
        if(original_color != color){
            dfs(image, sr, sc, original_color, color);
        }
        return image;
    }
    private:
        void dfs(vector<vector<int>>& image, int r, int c, int original_color, int new_color ){
            //Boundary check
            if(r < 0 || r >= image.size() || c < 0 || c >= image[0].size()){
                return;
            }
            //Color check and wall check
            if(image[r][c] != original_color){
                return;
            }
            image[r][c] = new_color;
            dfs(image, r-1, c, original_color, new_color); //UP
            dfs(image, r+1, c, original_color, new_color); //DOWN
            dfs(image, r, c-1, original_color, new_color); //LEFT
            dfs(image, r, c+1, original_color, new_color); //RIGHT
        }
};