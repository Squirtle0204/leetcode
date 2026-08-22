class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;
        
        while (i >= 0) {
            // Skip trailing spaces
            while (i >= 0 && s[i] == ' ') i--;
            if (i < 0) break;
            
            int j = i;
            // Find start of current word
            while (i >= 0 && s[i] != ' ') i--;
            
            // Append word directly to result
            if (!ans.empty()) ans += " ";
            ans.append(s.substr(i + 1, j - i));
        }
        
        return ans;
    }
};