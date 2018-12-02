class Solution {
public:
    string reverseStr(string s, int k) {
        
        int length = s.length();
        for(int start =0; start<length;start =start + 2*k){
            
            int i = start , j = std::min(start+k-1,length-1);
            char c;
            for(;i<j;i++,j--){
                c= s[i];
                s[i]=s[j];
                s[j]=c;
            }
        }
        return s;
    }
};
