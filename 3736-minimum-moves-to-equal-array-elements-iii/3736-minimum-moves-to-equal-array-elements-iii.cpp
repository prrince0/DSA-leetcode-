class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int max = nums[n - 1];
        int ans = 0;
        for (int x : nums) {
            ans += (abs(max - x));
        }
        return ans;
    }
};