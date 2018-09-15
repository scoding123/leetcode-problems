class Solution {
public:
    int myAtoi(string str) {
        int len = str.length();
        bool plus=true;
        int i=0;
        long long ans = 0;
        for(i=0;i<len;i++){
            if(str[i]==' '){
                continue;
            }
            else
                break;
        }
        if(i==len)
            return 0;
        
        if(str[i]=='+'){
            plus=true;
            i++;
        }
      else  if(str[i]=='-'){
            plus=false;
            i++;
        }
            
       else if(!isdigit(str[i]))
           return 0;
               
               for(;i<len&&isdigit(str[i]);i++)
               {
                  
                   ans = (ans *10) ;
                   ans = ans + (str[i]-48);
                   if(ans > 2147483648 )
                       break;
               }
               if(plus){
                   if(ans>2147483647)
                       return 2147483647;
                       return ans;
                   
               }
                   else{
                       if(-ans < -2147483648)
                           return -2147483648;
                       return -ans;
                   }
               
           
        
    }
};
