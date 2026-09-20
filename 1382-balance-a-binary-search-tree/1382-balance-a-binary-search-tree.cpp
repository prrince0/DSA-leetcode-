/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> nums;

    void toSortedarray(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        toSortedarray(root->left);

        nums.push_back(root->val);

        toSortedarray(root->right);
    }

    TreeNode* converter(vector<int>& nums, int start, int end) {
        if (start > end) {
            return nullptr;
        }

        int mid = start + (end - start) / 2;

        TreeNode* curr = new TreeNode(nums[mid]);

        curr->left = converter(nums, start, mid - 1);
        curr->right = converter(nums, mid + 1, end);

        return curr;
    }

    TreeNode* balanceBST(TreeNode* root) {
        toSortedarray(root);

        int start = 0;
        int end = nums.size() - 1;

        return converter(nums, start, end);
    }
};