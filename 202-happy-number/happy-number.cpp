class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>seen;
        while(n!=1){
            int sum=0;
            if(seen.count(n))return false;
            seen.insert(n);
            while(n>0){
            int d=n%10;
            sum=sum+(d*d);
            n/=10;
        } 
        n=sum;
        }
         
        return true;
    }
};