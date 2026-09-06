class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int first = 0;
        int second = n - 1;
        int ans = 0;
       for (int i = 0; i < k; i++) {
            ans += cardPoints[i];
        }
        int curr = ans;
        for (int i = 0; i < k; i++) {
            curr -= cardPoints[k - 1 - i];
            curr += cardPoints[n - 1 - i];
            ans = max(ans, curr);
        }
        return ans;
    }
};