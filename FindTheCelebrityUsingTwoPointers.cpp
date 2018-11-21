// Forward declaration of the knows API.
bool knows(int a, int b);

class Solution {
public:
    int findCelebrity(int n) {
        if (n <= 1) {
            return -1;
        }
        
        int a=0,b=n-1;
        while(a<b){
            if(knows(a,b))
                a++;
            else
                b--;
        }
        for(int i=0;i<n;i++){
        if ( (i != a) && 
                (knows(a, i) ||  
                !knows(i, a)) ) 
            return -1;
        }
        return a;
    }
};
