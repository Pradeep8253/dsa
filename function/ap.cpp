#include <iostream>
using namespace std;

int ap(int n)
{
    int ans = (3 * n + 7);

    return ans;
}

int main()
{

    cout << "Enter the value of the n  " << endl;

    int n;

    cin >> n;

    int ans = ap(n);

    cout << "ans is " << ans << endl;

    return 0;
}