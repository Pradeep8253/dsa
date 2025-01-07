#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number of the n " << endl;
    int n;
    cin >> n;

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        cout << fact << endl;
    }
}

// Q factorial of n
// exp : - 5 = 5*4*3*2*1



// output : - 

// Enter the number of the n 
// 5
// 1
// 2
// 6
// 24
// 120