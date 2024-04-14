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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) return 0;
        int sum = 0;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            if(node->left != NULL) {
                if(node->left->left == NULL && node->left->right == NULL)
                    sum += node->left->val;
                else
                    st.push(node->left);
            }
            if(node->right != NULL) {
                st.push(node->right);
            }
        }
        return sum;
    }
};
