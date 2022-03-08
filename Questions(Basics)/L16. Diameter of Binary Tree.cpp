// https: // leetcode.com/problems/diameter-of-binary-tree/

class Solution
{
private:
    int dfsHeight(TreeNode *root, int &ans)
    {
        if (!root)
            return 0;
        int left = dfsHeight(root->left, ans);
        int right = dfsHeight(root->right, ans);
        ans = max(ans, left + right);

        return 1 + max(left, right);
    }

public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        int ans = 0;
        dfsHeight(root, ans);
        return ans;
    }
};  