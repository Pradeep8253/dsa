#include <iostream>

using namespace std;

int main()
{
    int n, row, col;
    cout << "Enter the value of n  " << endl;

    cin >> n;

    for (row = n; row >= 1; row = row - 1)
    {
        //  print *
        for (col = 1; col <= row; col = col + 1)
        {
            cout << "*" << " ";
        }

        //  print space

        for (col = 1; col <= 2 * (n - row); col = col + 1)
        {
            cout << "  ";
        }

        //  print  *

        for (col = 1; col <= row; col = col + 1)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }

     for (row = 1; row <= n; row = row + 1)
    {
        //  print *
        for (col = 1; col <= row; col = col + 1)
        {
            cout << "*" << " ";
        }

        //  print space

        for (col = 1; col <= 2 * (n - row); col = col + 1)
        {
            cout << "  ";
        }

        //  print  *

        for (col = 1; col <= row; col = col + 1)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }
}




// OUTPUT 



// Enter the value of n  
// 5
// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 
// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 