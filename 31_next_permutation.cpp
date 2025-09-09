class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
    
        int pivotIndex = n - 2;
        while (pivotIndex >= 0 && nums[pivotIndex] >= nums[pivotIndex + 1]) {
            pivotIndex--;
        }
      
        if (pivotIndex >= 0) {
        
            for (int swapIndex = n - 1; swapIndex > pivotIndex; swapIndex--) {
                if (nums[swapIndex] > nums[pivotIndex]) {
               
                    swap(nums[pivotIndex], nums[swapIndex]);
                    break;
                }
            }
        }
      
        reverse(nums.begin() + pivotIndex + 1, nums.end());
    }
};
