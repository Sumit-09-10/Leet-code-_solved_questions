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
    int i = 0;
    int i_max = 0;

    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        i++;
        if (i > i_max) {
            i_max = i;
        }

        maxDepth(root->left);
        maxDepth(root->right);

        i--;

        return i_max;
    }
};
  

