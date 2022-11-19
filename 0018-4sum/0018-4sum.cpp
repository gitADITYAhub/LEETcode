class Solution {
public:
//     vector<vector<int>> fourSum(vector<int>& num, int target) {
//         vector<vector<int> > res;
        
//         if (num.empty())
//             return res;
//         int n = num.size(); 
//         sort(num.begin(),num.end());
    
//         for (int i = 0; i < n; i++) {
        
//             // int target_3 = target - num[i];
        
//             for (int j = i + 1; j < n; j++) {
            
//                 // int target_2 = target_3 - num[j];
//                                long long target_2 = target - num[i] - num[j];

            
//                 int front = j + 1;
//                 int back = n - 1;
            
//                 while(front < back) {
                
//                     int two_sum = num[front] + num[back];
                
//                     if (two_sum < target_2) front++;
                
//                     else if (two_sum > target_2) back--;
                
//                     else {
                    
//                         vector<int> quadruplet(4, 0);
//                         quadruplet[0] = num[i];
//                         quadruplet[1] = num[j];
//                         quadruplet[2] = num[front];
//                         quadruplet[3] = num[back];
//                         res.push_back(quadruplet);
                    
//                         // Processing the duplicates of number 3
//                         while (front < back && num[front] == quadruplet[2]) ++front;
                    
//                         // Processing the duplicates of number 4
//                         while (front < back && num[back] == quadruplet[3]) --back;
                
//                     }
//                 }
                
//                 // Processing the duplicates of number 2
//                 while(j + 1 < n && num[j + 1] == num[j]) ++j;
//             }
        
//             // Processing the duplicates of number 1
//             while (i + 1 < n && num[i + 1] == num[i]) ++i;
        
//         }
    
//         return res;
//     }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //ans vector to store final ans.
        vector<vector<int>> ans;
        
        //sorting the nums array
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        for(int i=0; i<n; ++i){
            //for remaining 3 elements
            long long remain3 = target - nums[i];
            
            for(int j = i+1; j < n; ++j){
                int left = j+1, right = n-1;
                //for remaining 2 elements
                long long remain2 = remain3 - nums[j];
                
                //using 2 pointer approach for finding remaining 2 elements
                while(left < right){
                    if((nums[left] + nums[right]) < remain2) left++;
                    else if((nums[left] + nums[right]) > remain2) right--;
                    else{
                        //if we reach here it means we got our quadrant
                        //x stores the element at position left and eliminate duplicates in below while loop.
                        int x = nums[left]; 
                        //similarly y stores the element at position right and eliminate duplicates in below while loop.
                        int y = nums[right];
                        
                        //push quadruple having sum equal to target inside ans vector.
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]}); 
                        
                        // Processing the duplicates of number 3
                        while(left < right && nums[left] == x) ++left;
                        
                        // Processing the duplicates of number 4
                        while(left < right && nums[right] == y) --right;
                    
                    }         
                }
                // Processing the duplicates of number 2
                while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
            // Processing the duplicates of number 1
            while(i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        
        return ans;
    }
};