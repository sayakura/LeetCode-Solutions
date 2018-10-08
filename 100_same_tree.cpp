class Solution {
public:
    bool  isSameTree2(TreeNode* p, TreeNode* q) {
        if (!q && !p)
            return true;
        else if (!q || !p)
            return false;
        if (q->val != p->val)
            return false;
        return (isSameTree2(q->left, p->left) && isSameTree2(q->right, p->right));
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q)
            return true;
        else if (!p || !q)
            return false;
        if (q->val != p->val)
            return false;
        bool l = isSameTree2(p->left, q->left);
        bool r = isSameTree2(p->right, q->right);
        return (l && r);
    }
};
