class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int>um;
        // for(int i=0;i<nums.size();i++){
        //     um[nums[i]]++;
        // }
        // for(int i=0;i<um.size();i++){
        //     if(um[i]>nums.size()/2)
        //         return i;
        // }
        // return 0;
        int elem=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                elem=nums[i];
            }
            if(elem==nums[i]){
                c++;
            }
            else{
                c--;
            }
        }
        return elem;
    }
};