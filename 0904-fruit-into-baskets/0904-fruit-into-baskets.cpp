class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // int n=fruits.size();
        // int i=0,j=0;
        // if(n==1){
        //     return 1;
        // }
        // unordered_map<int,int>mp;
        // int mx=0;
        // while(j<n){
        //     mp[fruits[j]]++;
        //     if(mp.size()<2){
        //         j++;
        //     }
        //     if(mp.size()==2){
        //         mx=max(mx,j-i+1);
        //         j++;
        //     }
        //     else if(mp.size()>2){
        //         while(mp.size()>2){
        //             mp[fruits[i]]--;
        //             if(mp[fruits[i]]==0){
        //                 mp.erase(fruits[i]);
        //             }
        //             i++;
        //         }
        //         j++;
        //     }
        // }
        // return mx;
        
        int i = 0, j = 0, k = 2, sz = fruits.size(), maxm = 0 ;
        unordered_map<int, int> umap ;
        
        while(j<sz)
        {
            umap[fruits[j]]++ ;
            
            if(umap.size() <= k)
            {
                maxm = max(maxm, j-i+1) ; j++ ;
            }
            else if(umap.size() > k)
            {
                while(umap.size() > k)
                {
                    umap[fruits[i]]-- ;
                    if(umap[fruits[i]] == 0){ umap.erase(fruits[i]) ; }
                    i++ ;
                }
                j++ ;
            }
        }
        return maxm ;
    }
};

