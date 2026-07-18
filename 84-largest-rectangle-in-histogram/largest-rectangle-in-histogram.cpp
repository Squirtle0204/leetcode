class Solution {
public:

    vector<int> nse(vector<int> & nums){
        stack<int>st;
        int n=nums.size();
        vector<int>nse(n);
        for(int i=n-1;i>=0;i--){
        while(!st.empty() && nums[st.top()]>=nums[i]){
            st.pop();
        }
        nse[i]=st.empty()? n :st.top();
        st.push(i);
        
        }
        return  nse;
        
    }

    vector<int> psee(vector<int>& nums){
        stack<int>st;
        int n=nums.size();
        vector<int>psee(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>nums[i]){
                st.pop();
            }

            psee[i]=(st.empty()?-1:st.top());
            st.push(i);
        }
        return psee;
    }
    int largestRectangleArea(vector<int>& heights) {
        int maxi=0;
        vector<int> nsee= nse(heights);
        vector<int>pseee=psee(heights);

        for(int i=0;i<heights.size();i++){
            int area= heights[i]* (nsee[i]-pseee[i]-1);
            maxi=max(maxi,area);


        }
        return maxi;
        
    }
};