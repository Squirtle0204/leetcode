class Solution {
public:
    bool isPalindrome(string s) {
     vector<char>alp;
    for(char ch:s){
        unsigned char uch=static_cast<unsigned char>(ch);
        if(isalnum(uch)){
            alp.push_back(tolower(uch));
        }
    }
     int i=0,j=alp.size()-1;
     while(i<j){
        if(alp[i]!=alp[j]){
            return false;
        }
        i++,j--;
       
     }
        return true;
    }
};