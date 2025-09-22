class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int frequency[101] = {0};

        for (int num : nums) {
            ++frequency[num];
        }

        int totalCount = 0;
        int maxFrequency = -1;
      
        for (int freq : frequency) {
            if (maxFrequency < freq) {
                maxFrequency = freq;
                totalCount = freq;  
            } else if (maxFrequency == freq) {
                totalCount += freq; 
            }
        }
      
        return totalCount;
    }
};
