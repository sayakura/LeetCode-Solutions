
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        int depth = 0;
        return balance_help(root, &depth);
    }
    bool balance_help(TreeNode *root, int *depth)
    {
        if (root == NULL)
            return true;
        int leftDepth = *depth + 1;
        if (!balance_help(root->left, &leftDepth ))
            return false;
        int rightDepth = *depth + 1;
        if (!balance_help(root->right, &rightDepth))
            return false;
        if (abs(leftDepth - rightDepth) > 1)
            return false;
        *depth = max(leftDepth, rightDepth);
        return true;
    }
};
