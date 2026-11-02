class Solution {
    public int compress(char[] chars) {
        int n = chars.length;
        int write = 0;
        int i = 0;

        while(i<n) {
            char curr = chars[i];
            int count = 0;

            while(i<n && chars[i]==curr){
                count++;
                i++;
            }

            chars[write]= curr;
            write++;

            if(count > 1){
                String s = String.valueOf(count);
                for(int j = 0;j<s.length();j++){
                    chars[write] = s.charAt(j);
                    write++;
                }
            }
        }

        return write;


        
    }
}