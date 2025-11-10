#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int space = n - row;
        //  for space
        while (space)
        {
            cout << " ";

            space = space - 1;
        }

        int col = 1;

        //  for the 1 st triangle

        while (col <= row)
        {
            cout << col;

            col = col + 1;
        }

        // for second triangle

        int start = row - 1;

        while ((start))
        {

            cout << start;
            start = start - 1;
        }

        cout << endl;

        row = row + 1;
    }
}

// Enter the value of the n

// 4
//    1
//   121
//  12321
// 1234321