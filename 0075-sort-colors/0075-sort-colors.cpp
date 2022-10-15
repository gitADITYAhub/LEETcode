class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]>nums[j]){
//                     swap(nums[i],nums[j]);
//                 }
                    
//             }
//         }
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
               a++;
            else if(nums[i]==1)
                b++;
            else if(nums[i]==2)
                c++;
        }
        for(int i=0;i<a;i++)
            nums[i]=0;
        for(int i=0;i<b;i++)
            nums[a+i]=1;
        for(int i=0;i<c;i++)
            nums[a+b+i]=2;
    }
};
