class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        unordered_set<char>st;
        int maxlen=0;

        while(r<s.size()){
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);
            maxlen = max(maxlen,r-l+1);
            r++;
        }
       return maxlen; 
    }
};