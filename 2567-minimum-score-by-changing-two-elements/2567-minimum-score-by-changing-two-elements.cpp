class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        //for min set it to 0 by making equal one number 
        // for max diff bet last and first 
        // to minimize score just change more number at index 0,1
        return min({nums[n-1]-nums[2],nums[n-2]-nums[1],nums[n-3]-nums[0]});
    }
};