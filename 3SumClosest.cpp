#include<climits>
#include<bits/stdc++.h>
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(),nums.end());
        int arrsize = nums.size();
        int min = INT_MAX;
        int sum = 0;
        for(int i=0;i<arrsize;i++){
            int j=i+1;
            int k = arrsize - 1;
            while(j<k)
            {
                
                int res = nums[i]+nums[j]+nums[k];
               int diff = (abs(res-target));
                if(diff==0)
                    return res;
                if(min>diff){
                    min = diff;
                    sum = res;
                    
                }
                if(res>target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return sum;
    }
    
};
