class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int maximum = 0;
        int idx= 0;
        pair<int,int> count = {0,0};
        for(int i = 0;i<n;i++){
            if(customers[i] == 'Y'){
                count.first++;
                count.second = i+1;
            }else {
                count.first--;
                count.second = i;
            }
            if(count.first>maximum){
                idx = count.second;
            }
            maximum = max(maximum,count.first);
            
        }
        return idx;
    }
};