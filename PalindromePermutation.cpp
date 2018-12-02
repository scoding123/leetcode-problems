class Solution {
public:
    bool canPermutePalindrome(string s) {
        unordered_map<char, int> umap;
        int odd=0;
        for(auto c: s){
            umap[c]++;
            if(umap[c]%2==1){
                odd++;
            }
            else{
                odd--;
            }
                
        }
        return odd<2;
    }
};
