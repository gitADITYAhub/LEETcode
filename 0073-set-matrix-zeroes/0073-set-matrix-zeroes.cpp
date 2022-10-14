class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>t1(n,-1);
        vector<int>t2(m,-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    t1[i]=0;
                    t2[j]=0; 
                }
                
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(t1[i]==0 || t2[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};