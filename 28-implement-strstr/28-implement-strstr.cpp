class Solution {
public:
    int strStr(string h, string nd) {
        if(nd.size()==0){
            return 0;
        }
        int m=h.size();
        int n=nd.size();
        for(int i=0;i<m-n+1;i++){
            if(nd[0]==h[i]){
                for(int j=0;j<n;j++){
                    if(h[i+j]==nd[j]){
                        if(j==n-1)
                          return i;
                    }
                    else
                        break;
                }
            }
            
        }
        return -1;
    }
};