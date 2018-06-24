class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map< int, int > mp;
        vector<int> ans;
        map<int, int>::iterator it ;
        for(int i=0;i<nums.size();i++){
            int complementnum = (target - nums[i]);
            it = mp.find(complementnum);
            if(it == mp.end() || it->second==i){
                
            }
            else{
                ans.push_back(it->second);
                ans.push_back(i);
                
                break;
            }
            mp.insert ( std::pair<int,int>(nums[i],i) );
        }     
        return ans;
    }
};
