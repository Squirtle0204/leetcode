class Solution {
public:

    bool check(string s , int st, int end){
        while(st<end){
            if(s[st]!=s[end])return false;
            st++,end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;

        while(l<r){
            if(s[l]==s[r]){
              l++,r--;
            }
            else{
                return check(s,l+1,r)|| check(s,l,r-1);
            }
            
        }
        return true;
    }
};