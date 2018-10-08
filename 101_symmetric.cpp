class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        queue<TreeNode*> leftq, rightq;
        leftq.push(root->left);
        rightq.push(root->right);
        while (!leftq.empty() && !rightq.empty())
        {
            TreeNode* left = leftq.front();
            TreeNode* right = rightq.front();
            if (left == NULL && right == NULL) {}
            else if (left == NULL || right == NULL || left->val != right->val)
                return false;
            else
            {
                leftq.push(left->left);
                leftq.push(left->right);
                rightq.push(right->right);
                rightq.push(right->left);
            }
            leftq.pop();
            rightq.pop();
        }
        return true;
    }
};
