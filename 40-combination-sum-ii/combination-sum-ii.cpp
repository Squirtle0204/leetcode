class Solution {
public:
void solve(int i,vector<vector<int>>&ans,vector<int>&candidates,vector<int>&ds,int target){
        if(target==0){
            ans.push_back(ds);
        return;
    }

    for(int j=i;j<candidates.size();j++){
        if(j>i && candidates[j]==candidates[j-1])continue;

         if(candidates[j]>target)break;

        ds.push_back(candidates[j]);
        solve(j+1,ans,candidates,ds,target-candidates[j]);
        ds.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,ans,candidates,ds,target);
        return ans;
    }
};