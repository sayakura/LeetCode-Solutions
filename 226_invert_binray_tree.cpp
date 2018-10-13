/* ***************************************************************************
 * File    : 226_invert_binray_tree.cpp
 * Author  : Kura Peng (kpeng) <https://github.com/sayakura>
 * Created : 2018/10/13
 * Updated : 2018/10/13
 * ***************************************************************************/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root != NULL)
        {
            TreeNode *temp = root->left;
            root->left = root->right;
            root->right = temp;
            invertTree(root->right);
            invertTree(root->left);
        }
        return root;
    }
};
