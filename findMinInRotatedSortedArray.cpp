class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int i = 0, j = nums.size()-1;
        while (i <= j) {
            int mid = (i+j)/2;
            if (mid != 0 && nums[mid-1] > nums[mid] || mid == 0 && nums[mid] < nums[mid+1]) {
                return nums[mid];
            } else if (nums[i] > nums[mid] || nums[mid] < nums[j]) {
                j = mid-1;
            } else {
                i = mid+1;
            }
        }
    }
};
