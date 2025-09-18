class Solution {
public:
    bool equalFrequency(string word) {
        vector<int>freq(26,0);
        for(char c:word)freq[c-'a']++;

        for(int i=0;i<26;i++){
            if(freq[i]==0)continue;

            freq[i]--;
            int val=0;
            bool ok=true;
            for(int f:freq){
                if(f==0)continue;
                if(val==0)val=f;
                else if(f!=val){
                    ok=false;
                    break;
                }
            }
            freq[i]++;
            if(ok)return true;
        }
        return false;
    }
};