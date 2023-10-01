class Solution {
public:
    string reverseWords(string s) {
        string res="";
        string temp;
        for(auto c:s){
            if(c==' '){
                
                reverse(temp.begin(),temp.end());
                res+=temp+" ";
                temp="";
            }
            else{
                temp+=c;
            }
        }
        
        reverse(temp.begin(),temp.end());
        res+=temp;
        return res;

    }
};