class Solution {
public:
    bool sumGame(string num) {
        int ql=0,qr=0;
        int sl=0,sr=0;

        for(int i=0;i<num.size();i++){
            if(i<num.size()/2){
                if(num[i]=='?'){
                    ql++;
                }
                else{
                    sl+=num[i]-'0';
                }
            }
            else{
                if(num[i]=='?'){
                    qr++;

                }
                else{
                    sr+=num[i]-'0';
                }
            }
        }
        if((ql+qr) % 2 !=0)return true;


        return 2*(sl-sr)!= 9*(qr-ql);
        
    }
};