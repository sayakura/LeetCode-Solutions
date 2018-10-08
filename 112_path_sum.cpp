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
    bool helper(TreeNode* root, int cur_sum, int target)
    {
        if (root == NULL)
            return false;
        cur_sum += root->val;
        if (root->right == NULL && root->left == NULL)
             if (cur_sum == target)
                return true;
            else
                return false;
        return helper(root->left, cur_sum, target) || helper(root->right, cur_sum, target);
    }
    bool hasPathSum(TreeNode* root, int sum) {
       if (root == NULL)
           return false;
        int cur_sum = 0;
        return helper(root, cur_sum, sum);
    }
};
