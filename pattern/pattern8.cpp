#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the value  n  " << endl;

    int n;

    cin >> n;

    int row = 1;

    int count = 1;

    while (row <= n)
    {

        int col = 1;

        while (col <= row)
        {
            cout << count << " ";

            count = count + 1;

            col = col + 1;
        }

        cout << endl;

        row = row + 1;
    }
}

// OUTPUT

//  Enter the value  n
// 5
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15