class Solution
{
public:
    vector<int> postOrder(Node *root)
    {
        // code here
        vector<int> ans;
        if (root == NULL)
            return ans;

        stack<Node *> st1, st2;
        st1.push(root);
        while (!st1.empty())
        {
            Node *temp = st1.top();
            st1.pop();
            st2.push(temp);
            if (temp->left != NULL)
                st1.push(temp->left);
            if (temp->right != NULL)
                st1.push(temp->right);
        }
        while (!st2.empty())
        {
            Node *temp = st2.top();
            st2.pop();
            ans.push_back(temp->data);
        }
        return ans;
    }
};