class Solution {
public:
    int reclengthOfLIS(vector<int>& nums,int prev,int curr){
        if(nums.size() == curr){
            return 0;
        }
        int taken=0;
        if(prev<=nums[curr]){
             taken = 1+reclengthOfLIS(nums,nums[curr],curr+1);
        }
        int nottaken = reclengthOfLIS(nums,prev,curr+1);
        return std::max(taken,nottaken);
    }
    int lengthOfLIS(vector<int>& nums) {
        return reclengthOfLIS(nums,INT_MIN,0);
    }
};
