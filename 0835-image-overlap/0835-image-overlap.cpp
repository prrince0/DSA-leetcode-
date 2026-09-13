class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1,
                       vector<vector<int>>& img2) {
        int n = img1.size();

        vector<pair<int, int>> ones1;
        vector<pair<int, int>> ones2;

        // Store positions of 1s in img1
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (img1[r][c] == 1) {
                    ones1.push_back({r, c});
                }
            }
        }

        // Store positions of 1s in img2
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (img2[r][c] == 1) {
                    ones2.push_back({r, c});
                }
            }
        }

        map<pair<int, int>, int> frequency;

        int answer = 0;

        // Compare every 1 in img1 with every 1 in img2
        for (auto [r1, c1] : ones1) {
            for (auto [r2, c2] : ones2) {
                int dr = r2 - r1;
                int dc = c2 - c1;

                pair<int, int> shift = {dr, dc};

                frequency[shift]++;

                answer = max(answer, frequency[shift]);
            }
        }

        return answer;
    }
};