class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       if (nums.size() == 0)
           return NULL;
        return getThatBST(nums, 0, nums.size() - 1);
    }
    TreeNode* getThatBST(vector<int>& nums, int start, int end)
    {
        if (start > end)
            return NULL;
        int mid = (end + start) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = getThatBST(nums, start, mid - 1);
        root->right = getThatBST(nums, mid + 1, end);
        return root;
    }
};
