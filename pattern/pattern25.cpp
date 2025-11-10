#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col;
            col++;
        }

        int starCount = (row - 1) * 2;
        int star = 1;
        while (star <= starCount)
        {
            cout << "*";
            star++;
        }

        int num = n - row + 1;
        while (num >= 1)
        {
            cout << num;
            num--;
        }

        cout << endl;
        row++;
    }

    return 0;
}

// Enter the value of n: 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
