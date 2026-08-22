class Solution {
public:
    bool checkDivisibility(int n) {
        int sod=0,pod=1;
        int x = n;

        while(x){
            int num = x%10;
            sod +=num;
            pod *=num;
            x=x/10;
        }
        
        if (n%(sod+pod)!=0)return false;
        else return true;
    }
}; 