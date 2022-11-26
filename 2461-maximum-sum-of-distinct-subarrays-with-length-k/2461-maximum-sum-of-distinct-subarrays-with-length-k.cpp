class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i=0,j=0;
        long long sum=0,mx=0;
        unordered_map<int,int>mp;
        while(j<nums.size()){
            sum+=nums[j];
            mp[nums[j]]++;
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(mp.size()==k){
                    mx=max(mx,sum);
                }
                    sum=sum-nums[i];
                    mp[nums[i]]--;
                    if(mp[nums[i]]==0){
                        mp.erase(nums[i]);
                    }
                    i++;
                
                j++;
            }
        }
        return mx;
    }
};