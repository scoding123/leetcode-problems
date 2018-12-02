class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int *dp = new int[1000];
        int n = cost.size();
        if(n==1)
           return dp[0];
        dp[0] = cost[0];
        dp[1] = std::min(cost[1],cost[0]);
        for(int i=0;i<n;i++){
            dp[i] = std::min(dp[i-1],dp[i-2])+cost[i];
        }
        return std::min(dp[n-1],dp[n-2]);
    }
};
