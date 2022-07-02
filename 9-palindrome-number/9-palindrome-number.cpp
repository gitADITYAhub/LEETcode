class Solution {
public:
    bool isPalindrome(int x) {
        //         if (x<0 || (x!=0 && x%10==0)) return false;
        // int r,temp;
        // int sum=0;
        // temp=x;
        // while(x>0){
        //     r=x%10;
        //     sum=sum*10+r;
        //     x=x/10;
        // }
        // if(temp==sum){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        if (x<0 || (x!=0 && x%10==0)) return false;
    int rev = 0;
    while (x>rev){
    	rev = rev*10 + x%10;
    	x = x/10;
    }
    return (x==rev || x==rev/10);
     }
};