class Solution {
public:
    bool checkIfPangram(string sentence) {
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        for(int i = 0 ;i<sentence.size();i++){
            sentence[i]=tolower(sentence[i]);
        }
        for(char c: alpha){
            int pos = sentence.find(c);
            if(pos == -1){
                return false;
            }
        }
        return true;
    }
};
