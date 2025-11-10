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
        int space = row - 1;
        int count = row;

        while (space > 0)
        {
            cout << " ";
            space = space - 1;
        }

        int col = 1;

        int num = n - row + 1;

        while (
            col <= num)
        {
            cout << count;

            count = count + 1;
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }
}


// Enter the value of the n
// 4
// 1234
//  234
//   34
//    4