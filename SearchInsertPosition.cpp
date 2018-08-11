class Solution {
public:

    
        int binarySearch(vector<int>& arr, int l, int r, int x)
    {
        if (r >= l)
        {
            int mid = l + (r - l)/2;
            
            if (arr[mid] >= x && arr[mid-1] < x)  
            return mid;
            
            
            if (arr[mid] > x) 
            return binarySearch(arr, l, mid-1, x);
            
            
            return binarySearch(arr, mid+1, r, x);
        }
            return r+1;
        }

    int searchInsert(vector<int>& nums, int target) {
       return binarySearch(nums,0,nums.size()-1,target);
}
};
