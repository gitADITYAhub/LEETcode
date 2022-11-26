class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,j=0,pro=1,count=0;
        if(k<=1){
            return 0;
        }
        while(j<nums.size()){
            pro=pro*nums[j];
            if(pro<k){
                count+=j-i+1;
                j++;
            }
            else if(pro>=k){
                while(pro>=k){
                    pro=pro/nums[i];
                    i++;
                }
                count+=j-i+1;
                j++;
            }
        }
        return count;
    }
};