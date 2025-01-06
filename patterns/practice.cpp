#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value of the n " << endl;
    int n;
    cin >> n;

    cout << "Enter the value of the m " << endl;
    int m;
    cin >> m;

    //  Q1.
    // 12345
    // 12345
    // 12345
    // 12345
    // 12345

    //  for(int i =1 ; i<=n ; i++){
    //     for(int j=1 ; j<=n ; j++){
    //         cout<<j ;
    //     }
    //     cout<<endl;
    //  }

    // Q2 .
    // 123456
    // 1    6
    // 1    6
    // 123456

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || j == 1 || i == n || j == m)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}