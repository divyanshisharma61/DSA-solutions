class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
    int n = arr.size();
    int m = arr[0].size();
    vector<int> ans;

    int left = 0;
    int right = m-1;
    int top = 0;
    int bottom = n-1;

    while(top<=bottom && left<=right){

        for(int j = left;j<=right;j++){
        ans.push_back(arr[top][j]);
    }top++;

    for(int i =top;i<=bottom;i++){
        ans.push_back(arr[i][right]);
    }right--;

    if(top<=bottom){

    for(int j = right;j>=left;j--){
    ans.push_back(arr[bottom][j]);
    }bottom--;
    }
    
    if(left<=right){
    for(int i = bottom;i>=top;i--){
    ans.push_back(arr[i][left]);     
    }left++;
    }
    }
    return ans;
    }
};