class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        
        string str = "11";
        string tmp="";
        int count = 1;
        for(int i=3;i<=n;i++){
           str = str +"#";
            tmp = "";
            for(int j=1;j<str.length();j++){
                
                if(str[j-1]!=str[j]){
                    
                    tmp += (count+ '0') ;
                    tmp += str[j-1];
                    count = 1;
                }
                else{
                    count ++;
                }
                
            }
            
            str = tmp;
        }
        return str;
    }
};
