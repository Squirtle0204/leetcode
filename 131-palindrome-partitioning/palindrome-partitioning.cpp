class Solution {
public:
 void partition(int index,string s,vector<vector<string>>&result,vector<string>&path){
    if(index==s.size()){
        result.push_back(path);
        return;
    }
    for(int i=index;i<s.size();i++){
        if(ispalindrome(s,index,i)){
            path.push_back(s.substr(index,i-index+1));
            partition(i+1,s,result,path);
            path.pop_back();
        }
    }
 }
    bool ispalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }

        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        vector<string>path;
        partition(0,s,result,path);
        return result;
        
    }
};