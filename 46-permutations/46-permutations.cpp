class Solution {
public:
    vector<vector<int>>res;
    
    void helper(vector<int>&nums,int idx){
        if(idx==nums.size()){
            res.push_back(nums);
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            helper(nums,idx+1);
            swap(nums[idx],nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        helper(nums,0);
        return res;

    }
};