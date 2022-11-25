class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0,sum=0,mx=INT_MAX;
        while(j<n){
            sum+=nums[j];
            if(sum<target){
                j++;
            }
            else if(sum>=target){
                while(sum>=target){
                    mx=min(mx,j-i+1);
                    sum=sum-nums[i];
                    i++;
                }
                j++;
            }
        }
        if(mx==INT_MAX) return 0;
        else return mx;
    
    }
};