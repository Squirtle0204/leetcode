class Solution {
public:

  vector<int> nse(vector<int> & arr){
    stack<int>st;
    vector<int>nse(arr.size());
     int n= arr.size();
     for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        nse[i] = st.empty()? n:st.top();
        st.push(i);
     }
  return nse;
  }

  vector<int>psee(vector<int> & arr){
    stack<int>st;
    int n=arr.size();
    vector<int>psee(n);
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        psee[i]=st.empty()?-1:st.top();
        st.push(i);

    }
    return psee;
  }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int>nsee=nse(arr);
        vector<int>pseee=psee(arr);
        int total=0;
        int modu=(int)(1e9 +7);
        for(int i=0;i<arr.size();i++){
            int left= i-pseee[i];
            int right=nsee[i]-i;
            total =(total+(left * right*1LL *arr[i])%modu)%modu;
        }
        
        return total;
    }
};