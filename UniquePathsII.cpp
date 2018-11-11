class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       int r = obstacleGrid.size();
        int w = obstacleGrid[0].size();
        int sol[100][100];
        if(obstacleGrid[0][0]==1)
            sol[0][0]=0;
        else
            sol[0][0]=1;
        
        if(obstacleGrid[r-1][w-1]==1)
            return 0;
        
        for(int i=1;i<r;i++)
        {
            if(obstacleGrid[i][0]==1)
                sol[i][0]=0;
            else
                sol[i][0] = sol[i-1][0];
        }
        for(int i=1;i<w;i++)
        {
            if(obstacleGrid[0][i]==1)
                sol[0][i]=0;
            else
                sol[0][i]=sol[0][i-1];
        }
        for(int i=1;i<r;i++){
            for(int j=1;j<w;j++){
                if(obstacleGrid[i][j]==1)
                    sol[i][j]=0;
                else
                    sol[i][j]=sol[i-1][j]+sol[i][j-1];
            }
        }
        return sol[r-1][w-1];
    }
};
