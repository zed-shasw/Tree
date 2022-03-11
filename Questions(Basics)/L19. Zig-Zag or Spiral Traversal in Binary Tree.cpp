class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (!root)
            return ans;
        queue<TreeNode *> q;
        q.push(root);
        bool flag = true;
        while (!q.empty())
        {
            int size = q.size();
            vector<int> v(size);
            for (int i = 0; i < size; ++i)
            {
                TreeNode *temp = q.front();
                q.pop();
                int index = flag ? i : (size - 1 - i);
                v[index] = temp->val;
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            flag = !flag;
            ans.push_back(v);
        }
        return ans;
    }
};