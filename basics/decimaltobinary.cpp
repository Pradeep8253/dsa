#include<iostream>

using namespace std ;

int main () {

    int n ; 
    cin>> n ; 
  int ans = 0 ;

  int power = 1 ;

  while (n>0)
  {
   int payrityDigit = n % 2 ;
   ans = ans +  payrityDigit * power ; 
   
   power  = power * 10 ;

   n/= 2 ;

  }

  cout<<ans <<endl;
  
}


// Output 
// Enter the Binary number of the digit 
// 5
// 101