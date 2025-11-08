#include <iostream>

using namespace std;

int main()
{
    cout << "Enter  the value of the  n  " << endl;

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int value = row;
        int col = 1;

        while (col <= row)
        {
            cout << value << " ";

            value = value + 1;

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

// OUTPUT

// Enter  the value of the  n
// 5
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9