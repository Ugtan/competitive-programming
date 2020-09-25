//Runtime: 4 ms
//Memory Usage: 8.4 MB

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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        TreeNode* invertRight = invertTree(root->right);
        TreeNode* invertLeft = invertTree(root->left);
        root->left = invertRight;
        root->right = invertLeft;
        return root;
    }
};
