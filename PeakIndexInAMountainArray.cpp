class Solution {
public:
    int bsearch(vector<int>& A,int l,int h){
       int len = A.size();
        int low = l;
        int high = h;
        if(low<=high){
            int mid = low + (high-low)/2;
            if((mid!=0&&A[mid]>A[mid-1])&&(mid!=len-1&&A[mid]>A[mid+1])){
                return mid;

            }
            if(A[mid]>A[mid-1]){
                return bsearch(A,mid+1,high);
            }
            else{
                return bsearch(A,low,mid-1);
            }
        } 
    }
    int peakIndexInMountainArray(vector<int>& A) {
        return bsearch(A,0,A.size()-1);
            
    }
};
