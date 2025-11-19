#include <iostream>
using namespace std;

int sumOffArray(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{

    cout << "Enter the size of the array" << endl;

    int size;
    cin >> size;

    cout << "Enter the value of the Element  of the  array  " << endl;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Sum  of the array " << sumOffArray(num, size) << endl;

    return 0;
}