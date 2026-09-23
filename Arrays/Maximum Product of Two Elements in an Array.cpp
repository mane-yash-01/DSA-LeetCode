class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxval = 0;

        for(int i = 0; i < nums.size(); i++){
            int val = nums[i];
            for(int j = i + 1; j < nums.size(); j++){
                if(((val - 1) * (nums[j] - 1)) > maxval){
                    maxval = ((val - 1) * (nums[j] - 1));
                }
            }
        }
        return maxval;
    }
};