class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());
        int prev = nums[0];
        if(n == 1) return nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == prev) {
                count++;
               
            } else {
                count = 1;
                 prev = nums[i];
            }
            if (count > n/2) {
                ans = nums[i];
            }
        }

        return ans;
    }
};