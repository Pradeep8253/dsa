#include <iostream>

using namespace std;

int main()
{

    cout << "Enter the value of the n  " << endl;

    int n;
    cin >> n;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++)
    {
        int sum = a + b;

        cout << sum << " ";

        a = b;
        b = sum;
    }
}

// Enter the value of the n
// 10
// 0 ,1 ,  1 2 3 5 8 13 21 34 55 89