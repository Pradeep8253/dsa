#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << " Enter the value of the n  " << endl;

    cin >> n;

    // int i = 0;

    // while (i < n)
    // {
    //     int j = 0;
    //     while (j < n)
    //     {
    //         cout << "*";
    //         j = j + 1;
    //     }

    //     cout << endl;

    //     i = i + 1;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Output

// Enter the value of the n
// 3
// ***
// ***
// ***