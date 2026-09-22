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
    int solve(TreeNode* root, int minVal) {
        if (root == nullptr) {
            return -1;
        }

        if (root->val > minVal) {
            return root->val;
        }

        int l = solve(root->left, minVal);
        int r = solve(root->right, minVal);

        if (l == -1) return r;
        if (r == -1) return l;

        return min(l, r);
    }

    int findSecondMinimumValue(TreeNode* root) {
        if (root == nullptr) {
            return -1;
        }

        return solve(root, root->val);
    }
};