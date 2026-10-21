class Solution {
    public int[] findDiagonalOrder(int[][] mat) {

        int n = mat.length;
        int m = mat[0].length;
        HashMap<Integer, ArrayList<Integer>> map  = new HashMap<>();

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(!map.containsKey(i+j)){
                    ArrayList<Integer> arr = new ArrayList<>();
                    arr.add(mat[i][j]);
                    map.put(i+j,arr);
                }
                else{
                    ArrayList<Integer> arr = map.get(i+j);
                    arr.add(mat[i][j]);
                    map.put(i+j,arr);

                }

                
            }
        }
        int [] ans = new int[n*m];
        int idx = 0;
        for(int d = 0;d<n+m-1;d++){
            if(d%2==1){
                for(int i = 0;i<map.get(d).size();i++){
                    ans[idx] = map.get(d).get(i);
                    idx++;
                }
            }
            if(d%2==0){
                for(int i = map.get(d).size()-1; i>=0; i-- ){
                    ans[idx] = map.get(d).get(i);
                    idx++;
                }
            }

        }
        return ans;
        
    }
}