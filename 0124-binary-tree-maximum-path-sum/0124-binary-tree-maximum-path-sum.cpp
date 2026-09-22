/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxsum=INT_MIN;
    int solve(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int l = solve(root->left);
        int r = solve(root->right);
        int Root = root->val;
        // take max of left & right;
        int lr = max(l, r) + root->val;
        // found tree with lr
        int with_lr = l + r + root->val;
        maxsum = max({maxsum, Root, lr, with_lr});
        return max(lr, Root);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxsum;
    }
};