// Forward declaration of the knows API.
bool knows(int a, int b);

class Solution {
public:
    int findCelebrity(int n) {
        stack<int> s; 
  
    int C; // Celebrity 
  
        //to handle n=2
        if(n==2)
        {
            if(knows(0,1)&&!knows(1,0))
                return 1;
            else if(knows(1,0)&&!knows(0,1))
                return 0;
            if(!knows(0,1)&&!knows(1,0)||(knows(0,1)&&knows(1,0)))
                return -1;
        }
    // Push everybody to stack 
    for (int i = 0; i < n; i++) 
        s.push(i); 
  
    // Extract top 2 
    int A = s.top(); 
    s.pop(); 
    int B = s.top(); 
    s.pop(); 
  
    // Find a potential celevrity 
    while (s.size() > 1) 
    { 
        if (knows(A, B)) 
        { 
            A = s.top(); 
            s.pop(); 
        } 
        else
        { 
            B = s.top(); 
            s.pop(); 
        } 
    } 
  
    // Potential candidate? 
    C = s.top(); 
    s.pop(); 
  
    // Last candidate was not  
    // examined, it leads one  
    // excess comparison (optimize) 
    if (knows(C, B)) 
        C = B; 
  
    if (knows(C, A)) 
        C = A; 
  
    // Check if C is actually 
    // a celebrity or not 
    for (int i = 0; i < n; i++) 
    { 
        // If any person doesn't  
        // know 'a' or 'a' doesn't  
        // know any person, return -1 
        if ( (i != C) && 
                (knows(C, i) ||  
                 !knows(i, C)) ) 
            return -1; 
    } 
  
    return C; 
} 
};
