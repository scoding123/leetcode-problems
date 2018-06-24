class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map< int, int > mp;
        vector<int> ans;
        map<int, int>::iterator it ;
        for(int i=0;i<nums.size();i++){
            mp.insert ( std::pair<int,int>(nums[i],i) );
        }
        for(int i=0;i<nums.size();i++){
            int complementnum = (target - nums[i]);
            it = mp.find(complementnum);
            if(it == mp.end() || it->second==i)
                continue;
            else{
                
                ans.push_back(i);
                ans.push_back(mp.find(complementnum)->second);
                break;
            }
            
        }
        return ans;
    }
};
