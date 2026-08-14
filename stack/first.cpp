#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

public:
    // constructor

    Stack(int s)
    {
        size = 5;
        top = -1;
        arr = new int[s];
    }

    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack is Overflow " << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "Pushed" << " " << value << " " << "into the stock " << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is underflow " << endl;
        }
        else
        {
            top--;
            cout << "Popped" << " " << arr[top + 1] << " " << "from the stack " << endl;
        }
    }

    int peak()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        else
        {
            return arr[top + 1];
        }
    }

    bool IsEmpty()
    {
        return top == -1;
    }

    int IsSize()
    {
        return top + 1;
    }
};

int main()
{
    Stack S(5);
    S.push(5);
    S.push(6);
    S.pop();
    cout << S.peak() << endl;
    cout << S.IsEmpty() << endl;
    cout << S.IsSize() << endl;
}