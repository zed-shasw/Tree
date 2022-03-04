#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int value)
    {
        value = data;
        left = right = NULL;
    }
};

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    return 0;
}