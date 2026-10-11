class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int l=0,r=0;
        unordered_set<char>st;
        int maxi=0;

        for(r=0;r<s.size();r++){
           while(st.count(s[r])){
            st.erase(s[l]);
            l++;

           }
           st.insert(s[r]);
           maxi = max(maxi,r-l+1);
        
        }


      return maxi;
    }
};