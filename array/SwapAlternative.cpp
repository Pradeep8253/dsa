#include <iostream>
using namespace std;

void SwapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void PrintArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    cout << "Enter the size of the array  " << endl;

    int size;
    cin >> size;

    cout << "Enter the values of the array " << endl;

    int num[size];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    SwapAlternate(num, size);
    PrintArray(num, size);

    return 0;
}

// OUTPUT
// Enter the size of the array
// 5
// Enter the values of the array
// 5 2 9 4 7
// 2 5 4 9 7