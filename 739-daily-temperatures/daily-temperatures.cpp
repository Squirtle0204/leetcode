class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>st;
        vector<int>ans(temp.size(),0);
    

        for(int i=0;i<temp.size();i++){
            while(!st.empty() && temp[st.top()] < temp[i]){
                int previ = st.top();
                st.pop();
                ans[previ]= i - previ;

            }
            st.push(i);
        }
        return ans;


        
    }
};