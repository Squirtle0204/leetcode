class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         vector<int>count(256,0);
        int l=0,r=0,maxl=0;
        while(r<s.size()){
            while(count[s[r]]>0){//repeating character
                count[s[l]]--;
                l++;
            } 
            count[s[r]]++;
            maxl=max(maxl,r-l+1); 
            r++;   
        } 
        return maxl;  
    }
    
};