class Solution {
public:
    int helper(vector<int>&nums,int i,int j,int n){
        int mid=i+(j-i)/2;
        if((mid==0||nums[mid-1]<=nums[mid]) && (mid==n-1||nums[mid+1]<=nums[mid]))
            return mid;
        
        else if(mid>0 && nums[mid-1]>nums[mid]){
            return helper(nums,i,mid-1,n);
        }
        else{
            return helper(nums,mid+1,j,n);
        }
    }
    int findPeakElement(vector<int>& nums) {
        return helper(nums,0,nums.size()-1,nums.size());
    }
};