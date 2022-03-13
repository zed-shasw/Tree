class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root==nullptr || trav(root->left,root->right);
    }
    bool trav(TreeNode *left, TreeNode *right)
    {
        if(left==NULL || right==NULL) return left==right;
        
        if(left->val!=right->val) return false;
        return trav(left->left,right->right) && trav(left->right,right->left);
    }
};