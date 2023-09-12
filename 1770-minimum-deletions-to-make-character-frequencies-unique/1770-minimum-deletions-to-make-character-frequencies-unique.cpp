class Solution {
public:
    int minDeletions(string s) {
        int del=0;
        unordered_map<char,int>count;
        for(auto c:s)
            count[c]++;
        unordered_set<int>seen;
        for(auto [k,v]:count){
            while(seen.find(v)!=seen.end()){
                v--;
                del++;
            }
            if(v>0)
                seen.insert(v);
        }
        return del;
    }
};