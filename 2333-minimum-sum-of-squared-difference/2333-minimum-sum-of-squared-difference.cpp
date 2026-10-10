class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1,
                               int k2) {
        int n = nums1.size();
        vector<int> countDiff(1e5 + 1, 0);
        for (int i = 0; i < n; i++) {
            int d = abs(nums1[i] - nums2[i]);
            countDiff[d]++;
        }
        int k = k1 + k2;
        for (int currDiff = 1e5; currDiff > 0 && k > 0; currDiff--) {
            int countOps = min(countDiff[currDiff], k);
            countDiff[currDiff] -= countOps;
            countDiff[currDiff - 1] += countOps;
            k -= countOps;
        }
        long long ans = 0;
        for (int d = 1; d <= 1e5; d++) {
           ans += 1LL * countDiff[d] * d * d;
        }
        return ans;
    }
};