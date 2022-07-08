class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
//         unordered_map<int,int>m;
//         for(int i=0;i<nums.size();i++){
//             if (m.find(nums[i]) == m.end())
//         {
//             m.insert(make_pair(nums[i], 1));
//         }
//             else{
 
//             m[nums[i]++];
//         }
//         }
//         return m.size();
        int dupl=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                dupl++;
            }
            nums[i-dupl]=nums[i];
        }
        return nums.size()-dupl;
    }
};