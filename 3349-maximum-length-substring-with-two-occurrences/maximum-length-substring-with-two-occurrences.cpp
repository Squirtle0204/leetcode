class Solution {
public:
    int maximumLengthSubstring(string s) {

        vector<int>count(26,0);
        int l=0,maxlen=0;

        for(int r=0;r<s.size();r++){
            count[s[r]-'a']++;

            while(count[s[r]-'a']>2){
                count[s[l]-'a']--;
                l++;
            }

            maxlen= max(maxlen,r-l+1);
        }
        return maxlen;
    }
};