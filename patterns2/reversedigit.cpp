#include<iostream>

using namespace std ;

int main () {

    cout<<"Enter the number of n " << endl ;
   int n ;
   cin>> n; 

   int revere=0 ;

while(n>0) {
    int lastdigit = n%10 ;

    revere = revere*10 + lastdigit ;
   n/=10 ;

}
cout<<revere <<endl ;
}

// output :-

// Enter the number of n 
// 123456
// 654321