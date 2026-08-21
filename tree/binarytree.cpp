#include <iostream>

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

Node *BinaryTree()
{
    int x;
    cin >> x;

    if (x == -1)
        return NULL;

    Node *temp = new Node(x);

    // left side create
    cout << "Enter the left child of " << x << " : ";
    temp->left = BinaryTree();

    // right side creat
    cout << "Enter the right  child of " << x << ": ";
    temp->right = BinaryTree();

    return temp;
}
void PreOrder(Node *root)
{
    if (root == NULL)
        return;

    // node
    cout << root->data << " ";
    // left
    PreOrder(root->left);
    // right
    PreOrder(root->right);
}

void InOrder(Node *root)
{
    if (root == NULL)
        return;

    // left
    InOrder(root->left);
    // node
    cout << root->data << " ";
    // right

    InOrder(root->right);
}

void PostOrder(Node *root)
{
    if (root == NULL)
        return;

    // left
    PostOrder(root->left);
    // right

    PostOrder(root->right);

    // node

    cout << root->data << " ";
}

int main()
{
    cout << "Enter the root Node : ";

    Node *root;
    root = BinaryTree();

    cout << "\n Pre Order:  ";
    PreOrder(root);

    cout << "\n In Order : ";
    InOrder(root);

    cout << "\n Post Order : ";
    PostOrder(root);
}

// Enter the root Node : 1
// Enter the left child of 1 : 2
// Enter the left child of 2 : 3
// Enter the left child of 3 : 4
// Enter the left child of 4 : -1
// Enter the right  child of 4: -1
// Enter the right  child of 3: 5
// Enter the left child of 5 : -1
// Enter the right  child of 5: -1
// Enter the right  child of 2: 6
// Enter the left child of 6 : -1
// Enter the right  child of 6: -1
// Enter the right  child of 1: 7
// Enter the left child of 7 : -1
// Enter the right  child of 7: 8
// Enter the left child of 8 : 9
// Enter the left child of 9 : -1
// Enter the right  child of 9: -1
// Enter the right  child of 8: 10
// Enter the left child of 10 : -1
// Enter the right  child of 10: -1

//  Pre Order:  1 2 3 4 5 6 7 8 9 10
//  In Order : 4 3 5 2 6 1 7 9 8 10
//  Post Order : 4 5 3 6 2 9 10 8 7 1