#include<iostream>

using namespace std ;

int main() {
cout<<"Enter the value of the n " << endl;
int n ; 
cin>> n ;

int sum = 0 ; 

for(int i=1 ; i<=n ; i++){
    if(i%2==0) {
        sum = sum - i ;
    }
    else{
        sum = sum + i ;
    }
}
cout<<sum << endl ;
}


// Q . 1-2+3-4+.....n

// Output : - 
// Enter the value of the n 
// 5 
// 3