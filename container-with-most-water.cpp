class Solution {
public:
    int max(int a, int b){
        
        if(a>b)
            return a;
        else
            return b;
    }
    int min(int a, int b){
        
        if(a>b)
            return b;
        else
            return a;
    }
    int maxArea(vector<int>& height) {
        
        int length = height.size();
        cout<<length<<endl;
        int i =0, j = length - 1;
        int area = 0;
        
        while(i<j){
            cout<<area<<endl;
            area = max(area,((j-i) * (min(height[i],height[j]))));
            if(height[i]>=height[j])
                j--;
            
            else if(height[i]<=height[j])
                i++;
            
            
        }
        return area;
    }
};
