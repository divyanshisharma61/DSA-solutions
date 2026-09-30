class Solution {
    public int secondHighest(String s) {
        int largest = -1;
        int slargest = -1;

        for(int i = 0;i<=s.length()-1;i++){

            int d = (int)(s.charAt(i)-'0');

            if(d >=0 && d<=9){
                if(d>largest){
                    slargest = largest;
                    largest= d;
                }
                else if(d> slargest && d !=largest){
                    slargest = d;
                }
            }
        }
        return slargest;
        
    }
}