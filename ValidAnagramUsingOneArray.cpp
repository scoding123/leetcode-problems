class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
       
        vector<int> count(128);
        for(auto c:s){
            count[c]++;
        }
        for(auto c:t){
            count[c]--;
        }
        for(int i=0;i<128;i++){
            if(count[i])
                return false;
        }
        return true;
        
    }
};
