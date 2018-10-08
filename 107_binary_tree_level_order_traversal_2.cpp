ass Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
       
        queue<TreeNode*> q;
        vector<vector<int>> arr;
        
         if (root == NULL)
            return arr;
        q.push(root);
        while (q.size())
        {
            int size = q.size();
            TreeNode* temp;
            vector<int> tempArr;
            for (int i = 0; i < size; i++)
            {
                temp = q.front();
                q.pop();
                tempArr.push_back(temp->val);
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            arr.push_back(tempArr);
        }
        for (int i = 0; i < arr.size() / 2; i++)
        {
            vector<int> temp = arr[i];
            arr[i] = arr[arr.size() - (i + 1)];
            arr[arr.size() - (i + 1)] = temp;
        }
        return arr;
    }
};
