class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int n = nums.size();
        int maxind = - 1;
        int minind = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxind = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < mini) {
                mini = nums[i];
                minind = i;
            }
        }
        int csf = max(minind+1 , maxind+1);
        int css = max(n-minind , n-maxind);
        int l = min(maxind+1 , n-maxind);
        int r = min(minind+1 , n-minind);
        int m = l+r;
      return min({m, css, csf});
    }
};