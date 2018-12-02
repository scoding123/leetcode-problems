class Solution {
public:
    string reverseWords(string s) {
         int n = s.size(); int i,j;
        char arr[s.size()+1]; //declare a character array of size of the string
        
        char res_arr[s.size()+1]; // array to store the result 
        
        strncpy(arr, s.c_str(),s.size()); 
        
         stack<char> stk;
        
        for( i=0,j=0; i< s.size();i++){
            stk.push(arr[i]);
            
            
                
            if(stk.top()==' ' || i==n-1){
                
                if(!(i==n-1))
                stk.pop();
                
                while(!stk.empty()){
                    
                    res_arr[j]=stk.top();
                    
                    if(j<n)
                    j++;
                    
                    stk.pop();
            }
                if(i<n-1){
                res_arr[j]=' ';
                j++;
            }
            }
          
           
            
        }
       res_arr[j]='\0';
        
         return res_arr;   
            
    }
};
