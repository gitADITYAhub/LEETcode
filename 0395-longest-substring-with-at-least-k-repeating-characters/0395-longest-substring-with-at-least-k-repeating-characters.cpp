class Solution {
public:
int longestSubstring(string s, int k) {
        int result=0;
        for(int i=1;i<=26;i++)
        {
            result=max(fun(s,k,i),result);
        }
        return result;
    }
    int fun(string &s,int k,int total_unique)
    {
        int i=0;
        int j=0;
        int current_unique=0;
        unordered_map<int,int>mp;
        int count=0;
        int result=0;
        while(j<s.size())
        {
            // Pre-Calculation
            mp[s[j]-'a']++;
            if(mp[s[j]-'a']==1)
                current_unique++;
            if(mp[s[j]-'a']==k)
                count++;
            
            // Play With Condition
            if(current_unique<total_unique)
                j++;
            else
            {
                while(current_unique>total_unique)
                {
                    // remove calculation for i
                    mp[s[i]-'a']--;
                    if(mp[s[i]-'a']==0)
                        current_unique--;
                    if(mp[s[i]-'a']==k-1)
                        count--;
                    i++;
                }
                
                if(count==total_unique)
                    result=max(result,j-i+1);
                j++;
            }
        
        }
        return result;
    }
};