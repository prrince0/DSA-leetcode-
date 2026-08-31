class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        vector<int> points;

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* next = curr->next;

        int pos = 1;

        while (next != NULL) {

            if ((curr->val > prev->val && curr->val > next->val) ||
                (curr->val < prev->val && curr->val < next->val)) {
                
                points.push_back(pos);
            }

            prev = curr;
            curr = next;
            next = next->next;
            pos++;
        }

        if (points.size() < 2) {
            return {-1, -1};
        }

        int small = INT_MAX;

        // Find minimum distance
        for (int i = 1; i < points.size(); i++) {
            small = min(small, points[i] - points[i - 1]);
        }

        // Largest distance
        int large = points[points.size() - 1] - points[0];

        vector<int> ans;

        ans.push_back(small);
        ans.push_back(large);

        return ans;
    }
};