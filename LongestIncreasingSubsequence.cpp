class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
         int *ans = new int[nums.size()];
         if(nums.size()==1)
             return 1;
        int maxans=0;
        ans[0]=1;
        int maxval=1;
        for(int i =1; i<nums.size();i++){
             maxval=0;
            for(int j =0;j<i;j++)
            {
                if(nums[i]>nums[j])
                    maxval = std::max(maxval,ans[j]);
            }
            ans[i]=maxval+1;
            maxans = std::max(maxans,ans[i]);
        }
        return maxans;
    
    }
};
