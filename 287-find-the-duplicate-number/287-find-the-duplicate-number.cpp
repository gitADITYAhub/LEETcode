class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>um;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            // if(um.find(nums[i])==um.end()){
            //     um.insert({nums[i],1});
            // }
        
                um[nums[i]]++;
    
        }
        
         for (auto& it : um) {
             if(it.second>1)
                 return it.first;
         }
        return -1;
        
        
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++){
        //     if(nums[i]==nums[i+1])
        //         return nums[i];
        // }
        // return -1;
    }
};