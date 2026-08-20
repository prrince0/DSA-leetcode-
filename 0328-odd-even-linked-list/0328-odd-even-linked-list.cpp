/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr)
            return nullptr;

        vector<int> nums;

       
        ListNode* temp = head;

        while (temp != nullptr) {
            nums.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> result;

        
        for (int i = 0; i < nums.size(); i += 2) {
            result.push_back(nums[i]);
        }

        
        for (int i = 1; i < nums.size(); i += 2) {
            result.push_back(nums[i]);
        }

        
        ListNode* newHead = new ListNode(result[0]);
        temp = newHead;

        for (int i = 1; i < result.size(); i++) {
            temp->next = new ListNode(result[i]);
            temp = temp->next;
        }

        return newHead;
    }
};