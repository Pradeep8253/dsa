#include <iostream>

using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    cout << "Enter the  value of the  size  " << endl;

    int size;

    cin >> size;

    cout << "Enter  the value of the   array  of the element  " << endl;

    cout << "Enter the value of the key  " << endl;

    int key;
    cin >> key;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    bool found = search(num, size, key);

    if (found)
    {
        cout << "Key is present " << endl;
    }
    else
    {
        cout << "key is absent " << endl;
    }

    return 0;
}