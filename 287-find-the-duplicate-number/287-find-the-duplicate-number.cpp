class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>um;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(um.find(nums[i])==um.end()){
                um.insert({nums[i],1});
            }
            else{
                um[nums[i]]++;
            }
        }
//         for(int i=0;i<um.size();i++){
//             if(um[i].second>1)
//                 return um[i].second;
            
//         }
         for (auto& it : um) {
             if(it.second>1)
                 return it.first;
         }
        return -1;
    }
};