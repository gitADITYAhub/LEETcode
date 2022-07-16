class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int flag=0;
        if(arr.size()<3)
            return false;
        for(int i=1;i<arr.size()-1;i++){
            if((arr[i-1]%2)!=0 and (arr[i]%2)!=0 and (arr[i+1]%2)!=0)
                return true;
            }
        
        return false;
    }
};