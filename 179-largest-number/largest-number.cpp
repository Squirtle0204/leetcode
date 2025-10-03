class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>vec;
        vec.reserve(nums.size());

        string ans="";
        for(int i:nums){
            vec.push_back(to_string(i));
        }
        auto comp=[](const string&a,string&b){
            return a+b>b+a;
        };
        sort(vec.begin(),vec.end(),comp);
        if(!vec.empty()&&vec[0]=="0"){
            return "0";
        }
        for(string i:vec){
            ans+=i;
        }
        return ans;
    }
};