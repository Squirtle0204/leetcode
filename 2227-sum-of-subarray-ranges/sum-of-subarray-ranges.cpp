class Solution {
public:
   vector<int>nse(vector<int> & nums){
    int n= nums.size();
    vector<int>nse(n);
    stack<int> st;

    for(int i =n-1;i>=0;i--){
        while(!st.empty() && nums[st.top()]>= nums[i]){
            st.pop();
        }
        nse[i]= st.empty()? n: st.top();
        st.push(i);
    }
    return nse;
   }

   vector<int>psee(vector<int> & nums){
    int n = nums.size();
    vector<int>psee(n);
    stack<int>st;

    for(int i=0;i<n;i++){
        while(!st.empty() && nums[st.top()]>nums[i]){
            st.pop();
        }
        psee[i]= st.empty()?-1:st.top();
        st.push(i);
    }
    return psee;
   }

   vector<int>nge(vector<int> & nums){
    int n= nums.size();
    vector<int>nge(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && nums[st.top()]<=nums[i]){
            st.pop();

        }
        nge[i]=st.empty()? n:st.top();
        st.push(i);
    }
    return nge;
   }

   vector<int>pgee(vector<int> & nums){
    int n= nums.size();
    vector<int>pgee(n);
    stack<int>st;
    for(int i =0;i<n;i++){
        while(!st.empty()&& nums[st.top()]<nums[i]){
           
            st.pop();
        }
        pgee[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    return pgee;
   }

   long long subarraymin(vector<int> & nums){
    vector<int>nsee=nse(nums);
    vector<int>pseee=psee(nums);
    long long smallest=0;
    for(int i=0;i<nums.size();i++){
        int left= i-pseee[i];
        int right= nsee[i]-i;
        smallest= (smallest +(left * right * 1LL * nums[i]));
   }
   return smallest;
   }
   

   long long subarraymax(vector<int> & nums){
    vector<int> pgeee= pgee(nums);
    vector<int>ngee=nge(nums);
    long long largest=0;
    for(int i=0;i<nums.size();i++){
        int left= i-pgeee[i];
        int right= ngee[i]-i;
        largest= (largest +( left * right * 1LL * nums[i]));
    }
    return largest;
   }
   
    long long subArrayRanges(vector<int>& nums) {
        return ( subarraymax(nums)-subarraymin(nums));
        
    }
};