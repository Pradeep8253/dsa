#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int main()
{
    int x;

    cout << "Enter the root element: ";
    cin >> x;

    queue<Node *> q;

    Node *root = new Node(x);
    q.push(root);

    // Build Binary Tree
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        // Left child
        cout << "Enter the left child of " << temp->data << " (-1 for NULL): ";
        int first;
        cin >> first;

        if (first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }

        // Right child
        cout << "Enter the right child of " << temp->data << " (-1 for NULL): ";
        int second;
        cin >> second;

        if (second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

    return 0;
}