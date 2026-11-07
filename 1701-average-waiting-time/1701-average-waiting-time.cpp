class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        long long prev = customers[0][0] + customers[0][1];
        long long tat = prev - customers[0][0];
        for (int i = 1; i < n; i++) {
            prev = max(prev, (long long)customers[i][0]) + customers[i][1];
            tat += prev - customers[i][0];
        }
        double avg = (double)tat / n;
        return avg;
    }
};