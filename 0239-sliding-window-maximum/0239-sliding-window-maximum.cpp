class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>ans;
//         for(int i=0;i<n-k+1;i++){
//             int mx=INT_MIN;

//             for(int j=i;j<i+k;j++){
//                 mx=max(mx,nums[j]);
//             }
//            ans.push_back(mx);

//         }
//         return ans;
        deque<int>q;
        int i=0,j=0;
        while(j<n){
            while(!q.empty() and q.back()<arr[j]){
                q.pop_back();
            }
            q.push_back(arr[j]);
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                ans.push_back(q.front());
                if(q.front()==arr[i]){
                    q.pop_front();
                }
                i++;
                j++;
                
            }
        }
        return ans;
    }
};
