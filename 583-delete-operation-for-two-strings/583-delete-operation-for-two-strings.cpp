class Solution {
public:
    int lcs(string X, string Y, int m, int n){
        
        int dp[m+1][n+1];
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0||j==0){
                   dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(X[i-1]==Y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        
        return dp[m][n];
        
        
        
    }
    
    int minDistance(string word1, string word2) {
        int del=word1.length()-lcs(word1,word2,word1.length(),word2.length());
        int add=word2.length()-lcs(word1,word2,word1.length(),word2.length());

        return del+add;
    }
};