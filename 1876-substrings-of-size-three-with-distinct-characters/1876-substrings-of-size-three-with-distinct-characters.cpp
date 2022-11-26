class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<int,int>mp;
        int i=0,j=0,c=0,k=3;
        int n=s.size();
        while(j<n){
            mp[s[j]]++;
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(mp.size()==3){
                    c++;
        
                }
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
                j++;
            }
        }
        return c;
    }
};