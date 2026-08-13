#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *Head, *Tail;

    Head = Tail = NULL;

    int arr[] = {2, 4, 6, 8, 10};

    // Insert values at the end
    for (int i = 0; i < 5; i++)
    {
        // Linked list is empty
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        // Linked list already exists
        else
        {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }

    // Print linked list
    Node *temp = Head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}