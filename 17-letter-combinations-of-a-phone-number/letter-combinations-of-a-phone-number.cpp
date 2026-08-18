class Solution {
public:
vector<string>mapping = {
    "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
};

  void solve( const string & digits, int i, string current, vector<string>&ans){
    if(i==digits.length()){
        ans.push_back(current);
        return;
    }

    string letters = mapping[digits[i]-'0'];
    for(char ch : letters){
        solve(digits, i+1, current + ch, ans);
    }

  }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string>ans;
        solve(digits,0,"",ans);
        return ans;
        
    }
};