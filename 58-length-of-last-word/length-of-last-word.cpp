class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        int i=s.size()-1;
        
        while(i>=0 && s[i]==' '){
            i--;   
        }
        while(i>=0 && s[i]!=' '){
            ans+=1;
            i--;
        }
     return ans;
        
    }
};