class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int temp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
                    // swap(nums[i],nums[j]);
            }
        }
    }
};