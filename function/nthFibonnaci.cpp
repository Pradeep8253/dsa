#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 1; i <= n; i++)
    {
        int sum = a + b;

        if (i == (n-2))
        {

            return sum;
        }

        a = b;
        b = sum;
    }
}

int main()
{

    cout << "Enter the value of the n  " << endl;

    int n;
    cin >> n;

    int ans = fibonacci(n);

    cout << ans;

    return 0;
}