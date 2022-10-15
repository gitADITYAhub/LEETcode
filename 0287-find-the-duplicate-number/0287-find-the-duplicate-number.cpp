class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         unordered_map<int,int>um;
//         int n=nums.size();
        
//         for(int i=0;i<n;i++){
//             // if(um.find(nums[i])==um.end()){
//             //     um.insert({nums[i],1});
//             // }
        
//                 um[nums[i]]++;
    
//         }
        
//          for (auto& it : um) {
//              if(it.second>1)
//                  return it.first;
//          }
//         return -1;
        
        int slow=nums[0];
        int fast=nums[0];
        do{
             slow=nums[slow];
            fast=nums[nums[fast]];
        }
        while(slow!=fast);
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
        
    }
};