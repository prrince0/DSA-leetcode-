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

    TreeNode* getSi(TreeNode* root) {
        while (root->left != nullptr) {
            root = root->left;
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {

        if (root == nullptr) {
            return nullptr;
        }

        // key is smaller → go left
        else if (root->val > key) {
            root->left = deleteNode(root->left, key);
            return root;
        }

        // key is larger → go right
        else if (root->val < key) {
            root->right = deleteNode(root->right, key);
            return root;
        }

        // key found
        else {

            // Case 1: 0 children
            if (root->left == nullptr && root->right == nullptr) {
                delete root;
                return nullptr;
            }

            // Case 2: 1 child
            else if (root->left == nullptr || root->right == nullptr) {
                TreeNode* child =
                    (root->left == nullptr) ? root->right : root->left;

                delete root;
                return child;
            }

            // Case 3: 2 children
            else {
                TreeNode* SI = getSi(root->right);

                root->val = SI->val;

                root->right = deleteNode(root->right, SI->val);

                return root;
            }
        }
    }
};