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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr){
        return 0;
        }
        stack<pair<TreeNode*,bool>>st;
        map<TreeNode*,int>height;
        st.push({root,false});
        int diameter = 0;
        while(!st.empty()){
            auto[curr,visited] = st.top();
            st.pop();
            if(curr == nullptr){
                continue;
            }
            if(!visited){
                st.push({curr,true});
                st.push({curr -> right,false});
                st.push({curr -> left,false});
            }
            else{
                int leftht = height[curr->left];
                int rightht = height[curr->right];
                diameter = max(diameter,leftht+rightht);
                height[curr] = 1+max(leftht,rightht);
            }
               
        }
        return diameter;
    }
};