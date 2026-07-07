class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)return 0;
        long long ans=1;
        vector<int>ve;
        int sum=0;
        while(n){
            int num=n%10;
            if(num!=0){
                ve.push_back(num);
                sum+=num;
               

            }
            n=n/10;

        }
        string s;
        reverse(ve.begin(),ve.end());
        for(auto it:ve){
             s +=to_string(it);

            
        }
        int no=stoi(s);
        ans=(long long )no*sum;
        return ans;
        
    }
};