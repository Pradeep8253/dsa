#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the value of the n " << endl;
    int n;
    cin >> n;

    int sum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + lastDigit;

        n /= 10;
    }
    cout << sum << endl;
}


// output : - 

// Enter the value of the n 
// 3212645
// 23