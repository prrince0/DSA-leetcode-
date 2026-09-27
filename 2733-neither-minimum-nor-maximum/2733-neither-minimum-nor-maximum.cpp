class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = -1;
        if (n <= 2) {
            return ans;
        } else {
            return nums[n - 2];
        }
        return -1;
    }
};