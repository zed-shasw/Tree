class Solution
{
private:
    int depth(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = depth(root->left);
        if (left == -1)
            return -1;
        int right = depth(root->right);
        if (right == -1)
            return -1;
        if (abs(left - right) > 1)
            return -1;
        return 1 + max(left, right);
    }

public:
    bool isBalanced(TreeNode *root)
    {
        if (!root)
            return true;
        if (depth(root) == -1)
            return false;
        return true;
    }
};