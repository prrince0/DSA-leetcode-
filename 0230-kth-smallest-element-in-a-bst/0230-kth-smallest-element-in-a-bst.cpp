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
    vector<int> toSortedArray(TreeNode* root) {
        if (root == nullptr) {
            return nums;
        }
        toSortedArray(root->left);
        nums.push_back(root->val);
        toSortedArray(root->right);
        return nums;
    }
    int kthSmallest(TreeNode* root, int k) {
        toSortedArray(root);
        return nums[k - 1];
    }
};