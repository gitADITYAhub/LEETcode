class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
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
