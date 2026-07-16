class Solution {
public:
    string removeKdigits(string num, int k) {
        string st;

        for(char ch : num){
            while(!st.empty() && k>0 && st.back()>ch){
               st.pop_back();
               k--;
            }
            st.push_back(ch);
        }

        while(k>0 && !st.empty()){
            st.pop_back();
            k--;
        }

        //remove leading zeroes
        int i=0;
        while(i<st.size() && st[i]=='0'){
            i++;
        }
        st=st.substr(i);
        return st.empty()?"0":st;
        
    }
};