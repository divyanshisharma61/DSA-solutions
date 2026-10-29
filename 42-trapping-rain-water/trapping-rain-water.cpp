class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int maxheight = height[0];int index =0;
        int leftmax =0;
        int rightmax = 0;
        int water=0;
        for(int i=0;i<n;i++){
            if(maxheight<height[i]){
                maxheight=height[i];
                index =i;

            }
        }

        for(int i = 0;i<index;i++){
            if(leftmax>height[i]){
                water +=leftmax-height[i];
                
            }
            else{
                leftmax=height[i];
            }
        }


        for(int i = n-1;i>=index;i--){
            if(rightmax>height[i]){
                water +=rightmax-height[i];
                
            }
            else{
                rightmax=height[i];
            }
        }
        return water;






        
    }
};