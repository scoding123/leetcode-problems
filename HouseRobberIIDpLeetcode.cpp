class Solution {
public:
    int rob(vector<int>& nums) {
        int l = nums.size();
        if(l==0)
            return 0;
        if(l==1)
            return nums[0];
        int *dp1 = new int[l];
        int *dp2 = new int[l];
        int ans =0;
        //rob house 0
        
        dp1[0] = nums[0];
        dp1[1] = nums[0];
        
        for(int i = 2; i<l-1;i++){
            dp1[i] = std::max((dp1[i-2]+nums[i]),dp1[i-1]);
        }
         ans = dp1[l-2];
        
        // do not rob house 0
        dp1[0]= 0;
        dp1[1] = nums[1];
        
        for(int i =2; i<l;i++){
            dp1[i] = std::max((dp1[i-2]+nums[i]),dp1[i-1]);
        }
         ans = ans>dp1[l-1]?ans:dp1[l-1];
        return ans;
    }
};
