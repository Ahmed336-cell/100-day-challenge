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

    TreeNode* he(TreeNode* root,int val  , int depth , int curr){
        if(depth==1){
            TreeNode* z = new TreeNode(val);
            z->left=root;
            return z; 
        }

        if(root==NULL){
            return root;
        }

        if(curr==depth-1){
            TreeNode * left=root->left;
            TreeNode * right = root->right;
            root->left=new TreeNode(val);
            root->right=new TreeNode(val);
            root->left->left=left;
            root->right->right=right;
            return root;
        }

        he(root->left,val,depth,curr+1);
        he(root->right,val,depth,curr+1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        return he(root,val,depth,1);
    }
};
