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
    ListNode* sortList(ListNode* head) {
        vector<int>nums;
        ListNode* temp = head;
        if(head == nullptr)
          return nullptr;
        while(temp != nullptr){
           nums.push_back(temp->val);
           temp= temp->next;
        }
        sort(nums.begin(),nums.end());
         
        ListNode* newHead = new ListNode(nums[0]);
        ListNode* newtemp = newHead;
        for(int i=1;i<nums.size();i++){
            newtemp->next = new ListNode(nums[i]);
            newtemp = newtemp -> next;
        }
        return newHead;
    }
};