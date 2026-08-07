#include <iostream>

using namespace std;

int fact(int N)
{

    if ( N==0)
        return 1;

     return  N *fact(N - 1);
}

int main()
{
    int N;
    cout << "Enter the value of the n  " << endl;

    cin >> N;

    if(N<0){
        cout << "Factorial is not possible \n";
        return 0 ;
    }

    cout << fact(N);
}