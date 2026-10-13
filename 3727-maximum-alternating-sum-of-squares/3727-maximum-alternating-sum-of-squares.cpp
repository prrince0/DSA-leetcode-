class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        for (int& x : nums) {
            x = abs(x);
        }
        sort(nums.begin(), nums.end());
        int small = 0;
        int large = nums.size() - 1;
        long long score = 0;
        while (small < large) {

            long long left = 1LL * nums[small] * nums[small];
            long long right = 1LL * nums[large] * nums[large];
            score += right - left;

            small++;
            large--;
        }
        if (small == large) {
            score += 1LL * nums[small] * nums[large];
        }
        return score;
    }
};




