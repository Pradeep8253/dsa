#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the value of the n " << endl;

    int n;
    cin >> n;

    int row = 1;

    char ch = 'A';

    while (row <= n)
    {
        int col = 1;

        while (col <= n)
        {

            cout << ch << " ";

            ch = ch + 1;

            col = col + 1;
        }

        cout << endl;

        row = row + 1;
    }
}

// OUTPUT

//  Enter the value of the n
// 5
// A B C D E
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y