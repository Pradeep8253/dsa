#include <iostream>

using namespace std;

int main()
{

    cout << "Enter the value of the n  " << endl;

    int n;

    cin >> n;

    int row = 1;

    while (row <= n)
    {

        int space = n - row;

        while (space > 0)
        {
            cout << " ";

            space = space - 1;
        }

        int col = 1;

        while (col <= row)
        {
            cout << row;

            col = col + 1;
        }

        cout << endl;

        row = row + 1;
    }
}

// Enter the value of the n
// 4
//    1
//   22
//  333
// 4444