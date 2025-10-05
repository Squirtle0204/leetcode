class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int>ans;
        vector<int>ans1;
        sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
         int i=0,j=0;
         while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                ans.insert(nums1[i]);
                i++;
                j++;
            }
         }
         for(int x:ans){
            ans1.push_back(x);
         }
        return ans1;
    }
};