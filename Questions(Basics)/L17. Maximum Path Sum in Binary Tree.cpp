// https://leetcode.com/problems/binary-tree-maximum-path-sum/submissions/

class Solution
{
public:
    int maxPathSum(TreeNode *root)
    {
        int ans = INT_MIN;
        path(root, ans);
        return ans;
    }

    int path(TreeNode *root, int &ans)
    {
        if (!root)
            return 0;
        int left = max(0, path(root->left, ans));
        int right = max(0, path(root->right, ans));
        ans = max(ans, left + right + root->val);

        return root->val + max(left, right);
    }
};