class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
       
        // Maximum difference found so far 
     int max_diff = 0; 
       
     // Minimum number visited so far  
     int min_element = 2147483647; 
     for(int i = 0; i < prices.size(); i++) 
     {      
       if (prices[i] - min_element > max_diff)                              
       max_diff = prices[i] - min_element; 
         
       if (prices[i] < min_element) 
       min_element = prices[i];                      
     } 
       
     return max_diff; 
    }
};
