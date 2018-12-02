class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int s = 0;
        string res;
        
       while(i>=0||j>=0||s==1){
            s += i>=0? (a[i]-'0'):0;
           s += j>=0? (b[j]-'0'):0;
           i --;
           j --;
           res = char(s%2 + '0') + res;
           s = s/2;
        }
        return res;
            
    }
};
