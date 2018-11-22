class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int umap1[128]={0};
        int umap2[128]={0};
       
        for(auto c:s){
            umap1[c]++;
        }
        
        for(auto c : t){
            umap2[c]++;
        }
        for(int i=0;i<128;i++){
            if(umap1[i]!=umap2[i])
                return false;
        }
        return true;
        
    }
};
