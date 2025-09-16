class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Sort the array
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];
        string result = "";

        for (int i = 0; i < first.size(); i++) {
            if (first[i] != last[i]) {
                break;
            }
            result += first[i];
        }
        return result;
    }
};
