class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int ans = 0;
        priority_queue<int> pq;
        vector<int> freq(26, 0);
        for (char ch : tasks) {
            freq[ch - 'A']++;
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                pq.push(freq[i]);
            }
        }
        while (!pq.empty()) {
            vector<int> temp;
            for (int i = 0; i < n + 1; i++) {
                if (!pq.empty()) {
                    int num = pq.top();
                    pq.pop();
                    num--;
                    temp.push_back(num);
                }
            }
            for (int j = 0; j < temp.size(); j++) {
                if (temp[j] > 0) {
                    pq.push(temp[j]);
                }
            }
            if (pq.empty()) {
                ans += temp.size();
            } else {
                ans += n + 1;
            }
        }

        return ans;
    }
};