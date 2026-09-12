class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int slen= s1.size();
        int sslen=s2.size();

        if(slen>sslen)return false;


        vector<int>count1(26,0);
        vector<int>count2(26,0);

        for(int i = 0;i<slen;i++){
            count1[s1[i]-'a']++;
            count2[s2[i]-'a']++;
        }

        //check for first window
        if(count1==count2)return true;

        for(int i = slen;i<sslen;i++){
            count2[s2[i]-'a']++;  //include new character
            count2[s2[i-slen]-'a']--;
            if(count1==count2)return true;
        }
       return false;
    }
};