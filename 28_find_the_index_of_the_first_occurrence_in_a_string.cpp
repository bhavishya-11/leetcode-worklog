class Solution {
public:
    int strStr(string haystack, string needle) {
        int hayEnd = haystack.length();
        int needEnd = needle.length();

        if (needEnd == 0) return 0;
        if (needEnd > hayEnd) return -1;

        for (int i = 0; i < hayEnd; i++) {
            while (i < hayEnd && haystack[i] != needle[0])
                i++;

            if (i < hayEnd) {
                int start = i + 1;
                int needIndex = 1;

                while (start < hayEnd && needIndex < needEnd &&
                       haystack[start] == needle[needIndex]) {
                    start++;
                    needIndex++;
                }

                if (needIndex == needEnd) return i;
            }
        }

        return -1;
    }
};
