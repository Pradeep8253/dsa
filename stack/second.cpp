#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Stack
{
    Node *top;
    int size; // actual size of  stack
    public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    // push

    void push(int value)
    {
        Node *temp = new Node(value);

        if (temp == NULL)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout << "Pushed " << value << " into the stack \n";
        }
    }
    // pop
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow\n";
            return;
        }
        else
        {
            Node *temp = top;
            cout << "Popped " << top->data << " from the stack\n";
            top = top->next;
            delete temp;
            size--;
        }
    }
    // peak

    int peak()
    {
        if (top == NULL)
        {
            cout << "Stack is Empty \n ";
            return -1;
        }
        else
        {
            return top->data;
        }
    }
    // IsEmpty
    bool IsEmpty()
    {
        return top == NULL;
    }
    // IsSize

    int IsSize()
    { 
        return size ;
    }
};

int main()
{
    Stack S;
    S.push(5);
    S.push(6);
    S.pop();
    cout << S.peak() << endl;
    cout << S.IsEmpty() << endl;
    cout << S.IsSize() << endl;
}