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
    int height(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }

        return 1 + max(height(root->left), height(root->right));
    }
    bool f(TreeNode* root) {
        if(root == nullptr) {
            return true;
        }
        int l = height(root->left);
        int r = height(root->right);

        if(abs(l-r) > 1) {
            return false;
        }

        return f(root->left) && f(root->right);
        
    }
    bool isBalanced(TreeNode* root) {
        return f(root);
    }
};