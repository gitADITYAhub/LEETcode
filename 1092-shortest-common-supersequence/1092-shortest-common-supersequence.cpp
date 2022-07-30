class Solution {
public:
    string lcs(string a,string b,int n,int m ){
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0||j==0)
                    dp[i][j]=0;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(a[i-1]==b[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }

        string s="";
        int i=n;
        int j=m;
        while(i>0 and j>0){
            if(a[i-1]==b[j-1]){
                s.push_back(a[i-1]);
                i--;
                j--;
            }
            else{
                if(dp[i-1][j]>dp[i][j-1]){
                    s.push_back(a[i-1]);
                    i--;
                }
                else{
                    s.push_back(b[j-1]);
                    j--;
                }

            }
        }
        while(i>0){
            s.push_back(a[i-1]);
            i--;
        }
        while(j>0){
            s.push_back(b[j-1]);
            j--;
        }

        reverse(s.begin(),s.end());
        return s;



}
    
    string shortestCommonSupersequence(string str1, string str2) {
        return lcs(str1,str2,str1.length(),str2.length());
    }
};