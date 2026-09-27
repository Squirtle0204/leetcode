class Solution {
public:
    string removeStars(string s) {
        string ans="";

        int i = 0;
        while(i<s.size()){
            if(s[i]=='*'){
                ans.pop_back();
                i++;
            }
            else{
                ans += s[i];
                i++;
            }
            
        }
        return ans;
    }
};