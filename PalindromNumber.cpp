class Solution {
public:
    bool isPalindrome(int x) {
        int revx= 0;
        
        int ans = x;
        if(x<0)
            return false;
        while(x!=0){
            int rem = x % 10;
            revx = revx * 10 + rem;
            x = x/10;
        }
        
        if(ans == revx)
            return true;
        else
            return false;
        
        
    }
};
