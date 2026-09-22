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
 /*
 vector<int> toSortedArray(TreeNode* root) {
        if (root == nullptr) {
            return nums;
        }
        toSortedArray(root->left);
        nums.push_back(root->val);
        toSortedArray(root->right);
        return nums;
    }
*/class Solution {
public:
    int ans = 0;
    int count = 0;
    void inorder(TreeNode* root,int k) {
       
        if (root == nullptr) {
            return;
        }
        inorder(root->left, k);
        count++;
        if(count == k){
            ans = root ->val;
        }
        inorder(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        //toSortedArray(root);
        inorder(root,k);
        return ans;
    }
};