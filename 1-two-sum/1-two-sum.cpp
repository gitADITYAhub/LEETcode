class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
//         for(int i=0;i<nums.size()-1;i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     res.push_back(i);
//                     res.push_back(j);

//                 }
//         }
//     }
        
        unordered_map<int,int>um;
        for(int i=0;i<nums.size();i++){
            int temp=target-nums[i];
            if(um.find(temp)!=um.end()){
                res.emplace_back(um[temp]);

                res.emplace_back(i);
            }
        
            um[nums[i]]=i;
        }
        
      return res;  
    }
};

        // unordered_map<int, int> indices;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (indices.find(target - nums[i]) != indices.end()) {
        //         return {indices[target - nums[i]], i};
        //     }
        //     indices[nums[i]] = i;
        // }
        // return {};
