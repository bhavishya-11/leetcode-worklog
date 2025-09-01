class Solution {
public:
    bool isPalindrome(string s) {
        int st =0,ed=s.length()-1;
        while (st<ed){
            if (!isalnum(s[st])){
                st++;
                continue;
            }
            if(!isalnum(s[ed])){
                ed--;
                continue;
            }
            if(tolower(s[st])!=tolower(s[ed])){
                return false;
            }
            st++;
            ed--;
        }
        return true;
    }

};
