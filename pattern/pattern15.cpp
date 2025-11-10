#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the value of the n  ";

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {

        int col = 1;

        char ch = 'A' + row + col - 2;
        while (col <= row)
        {
            cout << ch;

            ch = ch + 1;

            col = col + 1;
        }

        cout << endl;

        row = row + 1;
    }
}

// OUTPUT

// Enter the value of the n  5
// A
// BC
// CDE
// DEFG
// EFGHI