class Solution {
public:
    bool isPalindrome(int x) {
        string original = to_string(x);
        string reverse = string(original.rbegin(), original.rend());
        return original==reverse;
        
    }
};
