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

        while (col <= row)
        {
            cout << row;

            col = col + 1;
        }

        cout << endl;

        row = row + 1;
    }
}


// OUTPUT 


// Enter the value of the n  5
// 1
// 22
// 333
// 4444
// 55555