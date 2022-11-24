class Solution {
public:
    string minWindow(string s, string t) {
        // string res = "";
        // if(s.size() < t.size()) return res;
        // unordered_map<char, int> umap;
        // for(auto it: t) umap[it]++;
        // int i=0, j=0;
        // int length = INT_MAX, count = umap.size();
        // while(j<s.size()){
        //     if(umap.find(s[j])!=umap.end()){
        //         umap[s[j]]--;
        //         if(umap[s[j]]==0) count--;
        //     }
        //     if(count > 0) j++;
        //     else if(count == 0){
        //         while(count==0){
        //             if(umap.find(s[i])!=umap.end()){
        //                 if(j-i+1 < length){
        //                     length = j-i+1;
        //                     res = s.substr(i, j-i+1);
        //                 }
        //                 umap[s[i]]++;
        //                 if(umap[s[i]] > 0) count++;
        //             }
        //             i++;
        //         }
        //         j++;
        //     }
        // }
        // return res;
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        int check=INT_MAX;
        string result;
        for(char &ch:t)map1[ch]++;
        int slow=0,fast=0,lettercounter=0;
        for(;fast<s.length();fast++)
        {
            char ch=s[fast];
            if(map1.find(ch)!=map1.end())
            {
                map2[ch]++;
            if(map2[ch]<=map1[ch])
                lettercounter++;
            }
            if(lettercounter>=t.length())
            {
                while(map1.find(s[slow])==map1.end()||map2[s[slow]]>map1[s[slow]])
                {
                    map2[s[slow]]--;
                    slow++;
                }
                if(fast-slow+1<check)
                {
                    check=fast-slow+1;
                    result=s.substr(slow,check);
                }
            }
        }
        return result;
    }
};