class Solution {
public:

 void solve(int i,vector<int>&candidates,vector<vector<int>>&ans,vector<int>&ds,int target){
    if(i==candidates.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
   
    if(candidates[i]<=target){
    //take
        ds.push_back(candidates[i]);
        solve(i,candidates,ans,ds,target-candidates[i]);
        ds.pop_back();
    }
        //not take
        solve(i+1,candidates,ans,ds,target);
    
 }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,candidates,ans,ds,target);
        return ans;
    }
};