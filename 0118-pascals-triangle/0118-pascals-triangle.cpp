class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        int n=numRows;
        for(int i=0;i<n;i++){
            vector<int>temp(i+1,1);
            for(int j=1;j<i;j++){
                temp[j]=res[i-1][j-1]+res[i-1][j];
            }
            res.emplace_back(temp);
        }
        return res;
    }
};