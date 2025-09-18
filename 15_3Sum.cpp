class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len=nums.size();
        vector<vector<int>> res;
        if(len<3)
            return res;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<len; i++){
            if(i>0 && nums[i]==nums[i-1])
                continue; 
            int left = i + 1, right = nums.size() - 1; 
            while(left<right) 
            {    
                if(nums[i] + nums[left] + nums[right] == 0){
                    res.push_back(vector<int>{nums[i],nums[left],nums[right]});
                    while(left<right && nums[left]==nums[left+1]) 
                        left++;
                    while(left<right && nums[right]==nums[right-1]) 
                        right--;
                    left++;
                    right--;
                }
                else if(nums[i]+nums[left]+nums[right]<0) 
                    left++; 
                else
                    right--; 
            }

        }
        return res;
    }
};
