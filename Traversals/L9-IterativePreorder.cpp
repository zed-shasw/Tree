class Solution{

    public:
    vector<int> preOrderTraversal(TreeNode *root)
    {
        vector<int> preOrder;
        if(root==NULL) return preOrder;

        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty())
        {
            root = s.top();
            s.pop();
            preOrder.push_back(root->val);
            if(root->right != NULL){
                s.push(root->right);    
            }
            if(root->left != NULL){
                s.push(root->left);
            }
        }
        return preOrder;
    }
};