class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int r = grid.size();
        int w = grid[0].size();
        
        for(int i=1;i<r;i++){
            grid[i][0] +=grid[i-1][0];
        }
        for(int i=1;i<w;i++){
            grid[0][i]+=grid[0][i-1];
        }
        for(int i=1;i<r;i++){
            for(int j=1;j<w;j++){
                grid[i][j]+= grid[i][j-1]>grid[i-1][j]?grid[i-1][j]:grid[i][j-1];
            }
        }
        return grid[r-1][w-1];
    }
};
