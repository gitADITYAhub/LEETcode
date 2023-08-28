class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int mp=0;
        // for(int i=0;i<prices.size();i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         if(prices[i]<prices[j]){
        //             mp=max(prices[j]-prices[i],mp);
        //         }
        //     }
        // }
        // return mp;
        int n=prices.size();
        int mp=0;
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            if(prices[i]<min){
                min=prices[i];
            }
            cout<<mp;
            mp=max(mp,prices[i]-min);
            
        }
        return mp;
    }
};