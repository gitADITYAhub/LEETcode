class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // set<int>s;
        vector<int>ans;
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=0;j<nums2.size();j++){
        //         if(nums1[i]==nums2[j])
        //             s.insert(nums1[i]);
        //     }
        // }
        // for(auto &a:s){
        //     ans.push_back(a);
        // }
        // return ans;
        
        set<int>s1,s2;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        for(auto val:s1){
            if(s2.find(val)!=s2.end()){
                ans.push_back(val);
            }
        }
        return ans;
    }
};