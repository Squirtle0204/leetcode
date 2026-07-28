class Solution {
public:
    string smallestPalindrome(string s) {
        int halfl= s.size()/2;

        string half= s.substr(0,halfl);
        sort(half.begin(),half.end());

        string revhalf= half;
        reverse(revhalf.begin(),revhalf.end());

        if(s.size()% 2 !=0){
            return half + s[halfl] + revhalf;
        }
        else {
            return half + revhalf;
        }
        
    }
};