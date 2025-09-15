class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = nums[0]; 
        int minP = nums[0]; 
        int result = nums[0]; 

        for(int i = 1 ; i<nums.size();i++){
            int current = nums[i];

            if(current < 0 ){
                swap(maxP , minP);  
            }

            maxP = max(current , maxP * current); 
            minP = min(current , minP * current );

            result = max(result , maxP);
        }

        return result ;
    }
};
