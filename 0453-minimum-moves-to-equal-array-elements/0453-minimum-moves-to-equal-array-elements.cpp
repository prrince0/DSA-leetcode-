class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < mini) {
                mini = nums[i];
            }
        }
        int ans = 0;
        for (int x : nums) {
            ans += (x - mini);
        }
        return ans;
    }
};
