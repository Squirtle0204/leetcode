class Solution {
public:
    int trap(vector<int>& height) {
        
        int rightmax=0,leftmax=0,water=0;
        int heightmax=height[0],index=0;
        for(int i=0;i<height.size();i++){//maximum 
        if(height[i]>heightmax){
            heightmax=max(heightmax,height[i]);
            index=i;
        }
        }
        for(int i=0;i<index;i++){//left
           if(leftmax>height[i]){
            water+=leftmax-height[i];
           }
           else{
            leftmax=height[i];
           }
        }
        //right
        for(int i=height.size()-1;i>index;i--){
            if(rightmax>height[i]){
                water+=rightmax-height[i];
            }
            else{
                rightmax=height[i];
            }
        }
        return water;
    }
};