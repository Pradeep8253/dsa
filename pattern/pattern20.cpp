#include <iostream>

using namespace std;

int main()
{

    cout << "Enter the value of the  n ";

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int space = row - 1;

        while (space > 0)
        {
            cout << " ";

            space = space - 1;
        }

        int num = n - row + 1;

        int col = 1;

        while (col <= num)
        {
            cout << row;

            col = col + 1;
        }

        cout << endl;

        row = row + 1;
    }
}

// Enter the value of the  n
// 4
// 1111
//  222
//   33
//    4