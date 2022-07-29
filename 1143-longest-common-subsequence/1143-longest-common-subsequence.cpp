class Solution {
public:
//     int dp[1001][1001];

//     int lcs(string text1, string text2,int n,int m){
        
        
//         if(n==0||m==0)
//             return 0;
//         if(dp[n][m]!=-1)
//             return dp[n][m];
//         if(text1[n-1]==text2[m-1])
//             return dp[n][m]=1+lcs(text1,text2,n-1,m-1);
//         else{
//             return dp[n][m]=max(lcs(text1,text2,n-1,m),lcs(text1,text2,n,m-1));
//         }
//         // return dp[n][m];
//     }
    
//     int longestCommonSubsequence(string text1, string text2) {
//         int n=text1.length();
//         int m=text2.length();
//         memset(dp,-1,sizeof(dp));
//         return lcs(text1,text2,n,m);
        
//     }
     int dp[1000 + 1][1000 + 1];
    
    int maxLen(string& s1, string& s2, int n, int m)
    {
        if (n == 0 || m == 0)
            return 0;
        
        if (dp[n][m] != -1)
            return dp[n][m];

        if (s1[n - 1] == s2[m - 1])
            return dp[n][m] = 1 + maxLen(s1, s2, n - 1, m - 1);
        else
            return dp[n][m] = max(0 + maxLen(s1, s2, n - 0, m - 1), 0 + maxLen(s1, s2, n - 1, m - 0));
    }
        
    int longestCommonSubsequence(string s1, string s2) 
    {
        memset(dp, -1, sizeof(dp));        
        return maxLen(s1, s2, s1.length(), s2.length());
    }
};