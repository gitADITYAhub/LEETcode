class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long sum=0,pro=1;
        long long c=0;
        int i=0,j=0,n=nums.size();
        while(j<n){
            sum=sum+nums[j];
            pro=sum*(j-i+1);
            if(pro<k){
                c=c+(j-i+1);
                j++;
            }
            else if(pro>=k){
                while(pro>=k){
                    sum-=nums[i];
                    i++;
                    pro=sum*(j-i+1);
                    
                }
                c=c+(j-i+1);
                j++;
            }
        }
        return c;
    }
};
