class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>pp(26,0);
        vector<int>w(26,0);

        int slen= s.size();
        int plen = p.size();

        if(slen<plen)return{};

        for(int i=0;i<plen;i++){
            pp[p[i]-'a']++;
            w[s[i]-'a']++;
        } 
        if(pp == w){
            ans.push_back(0);
        }

        for(int i = plen;i<s.size();i++){
            w[s[i]-'a']++;
            w[s[i-plen]-'a']--;

            if(pp==w){
                ans.push_back(i-plen+1);
            }
        }
        return ans;
    }
};