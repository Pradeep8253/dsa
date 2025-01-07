#include <iostream>

using namespace std;

int main()
{

    cout << "Enter the value of the n and m " << endl;
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}


// Output :-

// ******
// ******
// ******
// ******
// ******