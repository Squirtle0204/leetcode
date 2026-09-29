class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        int ans=0;

        string word;

        while(ss>>word){
            ans++;
        }
        return ans;
    }
};