#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the value of the binary number \n";
    int n;
    cin>> n ;

    int ans = 0 ;
    int power = 1 ; 

    while (n>0)
    {
       int lastDigit = n%10 ;
       ans = ans + lastDigit*power ;
       power =  power * 2 ;
       n = n/10 ;
    }
    
    cout<< ans ;
    
}


// OutPut 

// Enter the value of the decimal number 
// 101
// 5