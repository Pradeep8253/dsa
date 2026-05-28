#include <iostream>
using namespace std;

int main()
{

    int n, row, col;

    cout << "Enter the value of the n  " << endl;
    cin >> n;

    for (row = 1; row <= n; row = row + 1)
    {
        for (col = 1; col <= n - row; col = col + 1)
        {
            cout << "  ";
        }
        for (col = 1; col <= row; col = col + 1)
        {
            cout << row-(col-1) << " ";
        }

        cout << endl;           
    }
}



// Output 


// Enter the value of the n  
// 5
//         1 
//       2 1 
//     3 2 1 
//   4 3 2 1 
// 5 4 3 2 1 