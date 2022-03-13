class Solution
{
public:
    vector<int> bottomView(Node *root)
    {
        // Your Code Here
        vector<int> ans;
        if (!root)
            return ans;
        map<int, int> nodes;
        queue<pair<Node *, int>> todo;
        todo.push({root, 0});
        while (!todo.empty())
        {
            auto p = todo.front();
            todo.pop();
            int x = p.second;
            Node *node = p.first;
            nodes[x] = node->data;
            if (node->left)
                todo.push({node->left, x - 1});
            if (node->right)
                todo.push({node->right, x + 1});
        }
        for (auto p : nodes)
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};