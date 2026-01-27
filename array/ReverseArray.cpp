#include <iostream>
using namespace std;

void ReverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    cout << "enter the size of the array  " << endl;

    int size;
    cin >> size;

    cout << "enter the value of the array  "<<endl;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    ReverseArray(num, size);
    PrintArray(num, size);

    return 0;
}

// OUTPUT
// enter the size of the array  
// 6
// enter the value of t   he array  10 20 30 -40 50 60
// 60 50 -40 30 20 10 