class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        int i=0;
        int n=chars.size();
        while(i<n){
            char curr_char=chars[i];
            int count =0;
            while(i<n && chars[i]==curr_char){
             count++;
             i++;

            }
            //assignment
            chars[index]=curr_char;
            index++;

            if (count>1){
                string s= to_string(count);
                for(char &ch: s){
                    chars[index]=ch;
                    index++;
                }
            }
        }
        return index;
        
    }
};