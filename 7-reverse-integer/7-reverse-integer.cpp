class Solution {
public:
    int reverse(int x) {
        // int r,sum=0;
        // int n=llabs(x);
        // while(n){
        //     r=n%10;
        //     sum=(sum*10)+r;
        //     n=n/10;
        // }
        // if(x>=0)
        //     return sum;
        // else if(x<0)
        //     return -sum;
        // else
        //     return 0;
       long long res = 0;
        while(x) {
            res = res*10 + x%10;
            x /= 10;
        }
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
    }
    
};