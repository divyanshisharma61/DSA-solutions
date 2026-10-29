class Solution {
public:
    bool checkIfPangram(string sentence) {
        for(char c = 'a';c<='z';c++){
            bool found = false;
            for(int i = 0;i<sentence.size();i++){
                if(sentence[i]==c){
                    found = true;
                    break;
                }
            }if(found==false){
                return false;
            }
        }
        return true;
        
    }
};