#include<iostream>
using namespace std ;

int main () {

int n ;
cin>> n ; 

int i = 1 ; 
int sum = 0 ;

// while (i<=n)
// {
//    sum += i ;
//    i++ ;
// }

// cout << sum <<endl ;

// }

for ( i = 0; i < n; i++)
{  
    sum +=i ;
}


cout<<sum << endl ;