/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* f(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr or root == p or root == q) {
            return root;
        }

        auto l = f(root->left, p, q);
        auto r = f(root->right, p, q);

        if(l == nullptr) {
            return r;
        }

        if(r == nullptr) {
            return l;
        }

        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return f(root, p, q);
    }
};