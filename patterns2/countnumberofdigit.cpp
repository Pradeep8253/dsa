#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of n " << endl;
    int n;
    cin >> n;

    int digit = 0;

    while (n > 0)
    {
        digit++;
        n = n / 10;
    }

    cout << digit << endl;
}

// output : - 
// Enter the number of n 
// 564646
// 6