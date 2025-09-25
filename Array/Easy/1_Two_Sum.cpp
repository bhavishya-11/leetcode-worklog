
// using Hash Map

class Solution {
public:
    unordered_map <int,int> mp;
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i =0;i<n;i++){
            int comp=target-nums[i];
            if(mp.find(comp)!=mp.end()){
                return {mp[comp],i};
            }
        mp[nums[i]]=i;
        }
    return {};
    }
};
