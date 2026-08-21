#include <iostream>
using namespace std;

// implement queue using   array

class Queue
{
    int *arr;
    int front, rear, size;

public:
    // Constructor

    Queue(int n)
    {
        arr = new int(n);
        size = n;
        front = rear = -1;
    }

    // If Queue is empty or not

    bool IsEmpty()
    {
        return front == -1;
    }

    // Queue is full or not

    bool IsFull()
    {
        return rear == size - 1;
    }

    //  Push element in Queue  into end

    void push(int x)
    {
        //  Empty
        if (IsEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            cout << "Pushed " << x << " into the Queue \n";
            return;
        }
        // Full
        else if (IsFull())
        {
            cout << " Queue Overflow \n";
            return;
        }
        //  insert
        else
        {
            rear = rear + 1;
            arr[rear] = x;
            cout << "Pushed " << x << " into the queue \n";
        }
    }

    // pop element  ,  starting

    void pop()
    {
        // Empty
        if (IsEmpty())
        {
            cout << "Queue  Underflow \n";
            return;
        }
        else
        {
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = front + 1;
            }
        }
    }

    // start  me konsa element rkha hua hai

    int start()
    {
        if (IsEmpty())
        {
            cout << "Queue is empty  \n";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{
    Queue q(5);

    q.push(4);
    q.push(15);
    q.push(16);

    q.pop();
    cout<<q.start() << endl ;
}