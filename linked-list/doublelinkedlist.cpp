#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

int main()
{

    Node *head = NULL, *tail = NULL;

    // Create Doubly Linked List

    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        // linkedlist does not exists
        if (head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        // linkedlist has exists
        else
        {
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    //  insert at start

    // linkedlist not exists

    if (head == NULL)
    {
        head = new Node(5);
    }

    //  linkedlist exists
    else
    {
        Node *temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    Node *trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
}