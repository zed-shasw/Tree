class Solution
{
public:
    vector<int> inOrder(Node *root)
    {
        // code here
        vector<int> ans;
        if (root == NULL)
            return ans;

        stack<Node *> s;
        Node *temp = root;
        while (true)
        {
            if (temp != NULL)
            {
                s.push(temp);
                temp = temp->left;
            }
            else
            {
                if (s.empty())
                    break;
                temp = s.top();
                s.pop();
                ans.push_back(temp->data);
                temp = temp->right;
            }
        }
        return ans;
    }
};