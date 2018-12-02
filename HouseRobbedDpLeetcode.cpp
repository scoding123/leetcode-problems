class Solution {
public:
   
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len==0)
            return 0;
        if(len==1)
            return nums[0];
        if(len==2)
            return std::max(nums[0],nums[1]);
        int *res = new int[len];
        res[0]= nums[0];
        res[1]= std::max(nums[0],nums[1]);
        for(int i=2;i<len;i++){
            res[i] = std::max(nums[i]+res[i-2],res[i-1]);
        }
        return res[len -1];
    }
    
       
     
};
