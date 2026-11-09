class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        int start = 0;
        int end = n-1;
        while(start<end){
            int h = min(height[start],height[end]);
            int w = end-start;
            int water = w*h;
            ans = max(ans,water);

            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
            
        }
        return ans;
        
    }
};