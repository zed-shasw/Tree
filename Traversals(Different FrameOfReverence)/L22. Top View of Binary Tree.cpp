class Solution
{
public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        // Your code here
        map<int, int> nodes;
        queue<pair<Node *, int>> todo;
        todo.push({root, 0});
        while (!todo.empty())
        {
            auto p = todo.front();
            todo.pop();
            int x = p.second;
            Node *node = p.first;
            if (nodes.find(x) == nodes.end())
            {
                nodes.insert({x, node->data});
            }
            if (node->left)
            {
                todo.push({node->left, x - 1});
            }
            if (node->right)
                todo.push({node->right, x + 1});
        }
        vector<int> ans;
        for (auto p : nodes)
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};
