class Solution {
public:
    int maxPower(string s) {
        int ans = 1;
        int current = 1;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                current++;
            } else {
                current = 1;
            }

            ans = max(ans, current);
        }

        return ans;
    }
};