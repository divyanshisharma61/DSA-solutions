class Solution {
public:
    bool halvesAreAlike(string s) {
        string s1 = s.substr(0,s.length()/2);
        string s2 = s.substr(s.length()/2);
        string vowels = "aeiouAEIOU";
        int c1 = 0;
        int c2 = 0;

        for(int i = 0;i<s1.length();i++){
            if(vowels.find(s1[i]) != string::npos){
                c1++;
            }
            if(vowels.find(s2[i]) != string::npos){
                c2++;
            }

        }
        return c1==c2;






        
    }
};